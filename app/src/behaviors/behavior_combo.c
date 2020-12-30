/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#define DT_DRV_COMPAT zmk_behavior_combo

#include <device.h>
#include <drivers/behavior.h>
#include <logging/log.h>
#include <sys/dlist.h>
#include <kernel.h>

#include <zmk/behavior.h>
#include <zmk/matrix.h>
#include <zmk/endpoints.h>
#include <zmk/event-manager.h>
#include <zmk/events/position-state-changed.h>
#include <zmk/events/keycode-state-changed.h>
#include <zmk/events/modifiers-state-changed.h>
#include <zmk/hid.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

struct combo_t {
    int32_t key_positions[CONFIG_ZMK_BHV_COMBO_MAX_KEYS_PER_COMBO];
    int32_t key_position_len;
    struct zmk_behavior_binding behavior;
    int32_t timeout_ms;
    // if slow release is set, the combo releases when the last key is released.
    // otherwise, the combo releases when the first key is released.
    bool slow_release;
    // the virtual key position is a key position outside the range used by the keyboard.
    // it is necessary so hold-taps can uniquely identify a behavior.
    int32_t virtual_key_position;
};

struct active_combo {
    struct combo_t *combo;
    // key_positions_pressed is filled with key_positions when the combo is pressed.
    // The keys are removed from this array when they are released.
    // Once this array is empty, the behavior is released.
    struct position_state_changed *key_positions_pressed[CONFIG_ZMK_BHV_COMBO_MAX_KEYS_PER_COMBO];
};

struct combo_candidate {
    struct combo_t *combo;
    // the time after which this behavior should be removed from candidates.
    // by keeping track of when the candidate should be cleared there is no
    // possibility of accidental releases.
    int64_t timeout_at;
};

// set of keys pressed
struct position_state_changed *pressed_keys[CONFIG_ZMK_BHV_COMBO_MAX_KEYS_PER_COMBO] = {NULL};
// the set of candidate combos based on the currently pressed_keys
struct combo_candidate candidates[CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY];
// the last candidate that was completely pressed
struct combo_t *fully_pressed_combo = NULL;
// a lookup dict that maps a key position to all combos on that position
struct combo_t *combo_lookup[ZMK_KEYMAP_LEN][CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY] = {NULL};
// combos that have been activated and still have (some) keys pressed
// this array is always contiguous from 0.
struct active_combo active_combos[CONFIG_ZMK_BHV_COMBO_MAX_PRESSED_COMBOS] = {NULL};
int active_combo_count = 0;

struct k_delayed_work timeout_task;
int64_t timeout_task_timeout_at;

struct behavior_combo_data {};
static struct behavior_combo_data behavior_combo_data;

// Store the combo key pointer in the combos array, one pointer for each key position
// The combos are sorted shortest-first, then by virtual-key-position.
static int initialize_combo(struct combo_t *new_combo) {
    for (int i = 0; i < new_combo->key_position_len; i++) {
        int32_t position = new_combo->key_positions[i];
        struct combo_t *insert_combo = new_combo;
        bool set = false;
        for (int j = 0; j < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; j++) {
            struct combo_t *combo_at_j = combo_lookup[position][j];
            if (combo_at_j == NULL) {
                combo_lookup[position][j] = insert_combo;
                set = true;
                break;
            }
            if (combo_at_j->key_position_len < insert_combo->key_position_len ||
                (combo_at_j->key_position_len == insert_combo->key_position_len &&
                 combo_at_j->virtual_key_position < insert_combo->virtual_key_position)) {
                continue;
            }
            // put insert_combo in this spot, move all other combos up.
            combo_lookup[position][j] = insert_combo;
            insert_combo = combo_at_j;
        }
        if (!set) {
            LOG_ERR(
                "Too many combos for key position %d, CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY %d.",
                position, CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY);
            return -ENOMEM;
        }
    }
    return 0;
}

static int setup_candidates_for_first_keypress(int32_t position, int64_t timestamp) {
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        struct combo_t *combo = combo_lookup[position][i];
        if (combo == NULL) {
            return i;
        }
        candidates[i].combo = combo;
        candidates[i].timeout_at = timestamp + combo->timeout_ms;
        // LOG_DBG("combo timeout %d %d %d", position, i, candidates[i].timeout_at);
    }
    return CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY;
}

static int filter_candidates(int32_t position) {
    // this code iterates over candidates and the lookup together to filter in O(n)
    // assuming they are both sorted on key_position_len, virtal_key_position
    int matches = 0, lookup_idx = 0, candidate_idx = 0;
    while (lookup_idx < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY &&
           candidate_idx < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY) {
        struct combo_t *candidate = candidates[candidate_idx].combo;
        struct combo_t *lookup = combo_lookup[position][lookup_idx];
        if (candidate == NULL || lookup == NULL) {
            break;
        }
        if (candidate->virtual_key_position == lookup->virtual_key_position) {
            candidates[matches] = candidates[candidate_idx];
            matches++;
            candidate_idx++;
            lookup_idx++;
        } else if (candidate->key_position_len > lookup->key_position_len) {
            lookup_idx++;
        } else if (candidate->key_position_len < lookup->key_position_len) {
            candidate_idx++;
        } else if (candidate->virtual_key_position > lookup->virtual_key_position) {
            lookup_idx++;
        } else if (candidate->virtual_key_position < lookup->virtual_key_position) {
            candidate_idx++;
        }
    }
    // clear unmatched candidates
    for (int i = matches; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        candidates[i].combo = NULL;
    }
    // LOG_DBG("combo matches after filter %d", matches);
    return matches;
}

static int64_t first_candidate_timeout() {
    int64_t first_timeout = LONG_MAX;
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        if (candidates[i].combo == NULL) {
            break;
        }
        if (candidates[i].timeout_at < first_timeout) {
            first_timeout = candidates[i].timeout_at;
        }
    }
    return first_timeout;
}

static inline bool candidate_is_completely_pressed(struct combo_t *candidate) {
    // this code assumes set(pressed_keys) <= set(candidate->key_positions)
    // this invariant is enforced by filter_candidates
    // the only thing we need to do is check if len(pressed_keys) == len(combo->key_positions)
    return pressed_keys[candidate->key_position_len - 1] != NULL;
}

static void cleanup();

static int filter_timed_out_candidates(int64_t timestamp) {
    int num_candidates = 0;
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        struct combo_candidate *candidate = &candidates[i];
        if (candidate->combo == NULL) {
            break;
        }
        if (candidate->timeout_at > timestamp) {
            // reorder candidates so they're contiguous
            candidates[num_candidates].combo = candidate->combo;
            candidates[num_candidates].timeout_at = candidates->timeout_at;
            num_candidates++;
        } else {
            candidate->combo = NULL;
        }
    }
    return num_candidates;
}

static int clear_candidates() {
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        if (candidates[i].combo == NULL) {
            return i;
        }
        candidates[i].combo = NULL;
    }
    return CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY;
}

static int capture_pressed_key(struct position_state_changed *ev) {
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        if (pressed_keys[i] != NULL) {
            continue;
        }
        pressed_keys[i] = ev;
        return ZMK_EV_EVENT_CAPTURED;
    }
    return 0;
}

const struct zmk_listener zmk_listener_behavior_combo;

static void release_pressed_keys() {
    // release the first key that was pressed
    if (pressed_keys[0] == NULL) {
        return;
    }
    ZMK_EVENT_RELEASE(pressed_keys[0])
    pressed_keys[0] = NULL;

    // reprocess events (see tests/combo/fully-overlapping-combos-3 for why this is needed)
    for (int i = 1; i < CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY; i++) {
        if (pressed_keys[i] == NULL) {
            return;
        }
        struct position_state_changed *captured_event = pressed_keys[i];
        pressed_keys[i] = NULL;
        ZMK_EVENT_RAISE(captured_event);
    }
}

static inline int press_combo_behavior(struct combo_t *combo, int32_t timestamp) {
    struct zmk_behavior_binding_event event = {
        .position = combo->virtual_key_position,
        .timestamp = timestamp,
    };

    return behavior_keymap_binding_pressed(&combo->behavior, event);
}

static inline int release_combo_behavior(struct combo_t *combo, int32_t timestamp) {
    struct zmk_behavior_binding_event event = {
        .position = combo->virtual_key_position,
        .timestamp = timestamp,
    };

    return behavior_keymap_binding_released(&combo->behavior, event);
}

static void move_pressed_keys_to_active_combo(struct active_combo *active_combo) {
    int combo_length = active_combo->combo->key_position_len;
    for (int i = 0; i < combo_length; i++) {
        active_combo->key_positions_pressed[i] = pressed_keys[i];
        pressed_keys[i] = NULL;
    }
    // move any other pressed keys up
    for (int i = 0; i + combo_length < CONFIG_ZMK_BHV_COMBO_MAX_KEYS_PER_COMBO; i++) {
        if (pressed_keys[i + combo_length] == NULL) {
            return;
        }
        pressed_keys[i] = pressed_keys[i + combo_length];
        pressed_keys[i + combo_length] = NULL;
    }
}

static struct active_combo *store_active_combo(struct combo_t *combo) {
    for (int i = 0; i < CONFIG_ZMK_BHV_COMBO_MAX_PRESSED_COMBOS; i++) {
        if (active_combos[i].combo == NULL) {
            active_combos[i].combo = combo;
            active_combo_count++;
            return &active_combos[i];
        }
    }
    LOG_ERR("Unable to store combo; already %d active. Increase "
            "CONFIG_ZMK_BHV_COMBO_MAX_PRESSED_COMBOS",
            CONFIG_ZMK_BHV_COMBO_MAX_PRESSED_COMBOS);
    return NULL;
}

static void activate_combo(struct combo_t *combo) {
    struct active_combo *active_combo = store_active_combo(combo);
    if (active_combo == NULL) {
        // unable to store combo
        release_pressed_keys();
        return;
    }
    move_pressed_keys_to_active_combo(active_combo);
    press_combo_behavior(combo, active_combo->key_positions_pressed[0]->timestamp);
}

static void deactivate_combo(int active_combo_index) {
    active_combo_count--;
    if (active_combo_index != active_combo_count) {
        memcpy(&active_combos[active_combo_index], &active_combos[active_combo_count],
               sizeof(struct active_combo));
    }
    active_combos[active_combo_count].combo = NULL;
    active_combos[active_combo_count] = (struct active_combo){0};
}

/* returns true if a key was released. */
static bool release_combo_key(int32_t position, int64_t timestamp) {
    for (int combo_idx = 0; combo_idx < active_combo_count; combo_idx++) {
        struct active_combo *active_combo = &active_combos[combo_idx];

        bool key_released = false;
        bool all_keys_pressed = true;
        bool all_keys_released = true;
        for (int i = 0; i < active_combo->combo->key_position_len; i++) {
            if (active_combo->key_positions_pressed[i] == NULL) {
                all_keys_pressed = false;
            } else if (active_combo->key_positions_pressed[i]->position != position) {
                all_keys_released = false;
            } else { // not null and position matches
                k_free(active_combo->key_positions_pressed[i]);
                active_combo->key_positions_pressed[i] = NULL;
                key_released = true;
            }
        }

        if (key_released) {
            if ((active_combo->combo->slow_release && all_keys_released) ||
                (!active_combo->combo->slow_release && all_keys_pressed)) {
                release_combo_behavior(active_combo->combo, timestamp);
            }
            if (all_keys_released) {
                deactivate_combo(combo_idx);
            }
            return true;
        }
    }
    return false;
}

static void cleanup() {
    k_delayed_work_cancel(&timeout_task);
    clear_candidates();
    if (fully_pressed_combo != NULL) {
        activate_combo(fully_pressed_combo);
        fully_pressed_combo = NULL;
    }
    release_pressed_keys();
}

static void update_timeout_task() {
    int64_t first_timeout = first_candidate_timeout();
    if (timeout_task_timeout_at == first_timeout) {
        return;
    }
    if (first_timeout == LLONG_MAX) {
        timeout_task_timeout_at = 0;
        k_delayed_work_cancel(&timeout_task);
        return;
    }
    if (k_delayed_work_submit(&timeout_task, K_MSEC(first_timeout - k_uptime_get())) == 0) {
        timeout_task_timeout_at = first_timeout;
    }
}

static int position_state_down(struct position_state_changed *ev) {
    int num_candidates;
    if (candidates[0].combo == NULL) {
        num_candidates = setup_candidates_for_first_keypress(ev->position, ev->timestamp);
        if (num_candidates == 0) {
            return 0;
        }
    } else {
        filter_timed_out_candidates(ev->timestamp);
        num_candidates = filter_candidates(ev->position);
    }
    update_timeout_task();

    struct combo_t *candidate_combo = candidates[0].combo;
    int ret = capture_pressed_key(ev);
    switch (num_candidates) {
    case 0:
        cleanup();
        return ret;
    case 1:
        if (candidate_is_completely_pressed(candidate_combo)) {
            fully_pressed_combo = candidate_combo;
            cleanup();
        }
        return ret;
    default:
        if (candidate_is_completely_pressed(candidate_combo)) {
            fully_pressed_combo = candidate_combo;
        }
        return ret;
    }
}

static int position_state_up(struct position_state_changed *ev) {
    cleanup();
    if (release_combo_key(ev->position, ev->timestamp)) {
        return ZMK_EV_EVENT_HANDLED;
    } else {
        return 0;
    }
}

static void combo_timeout_handler(struct k_work *item) {
    if (timeout_task_timeout_at == 0 || k_uptime_get() < timeout_task_timeout_at) {
        // timer was cancelled or rescheduled.
        return;
    }
    if (filter_timed_out_candidates(timeout_task_timeout_at) < 2) {
        cleanup();
    }
    update_timeout_task();
}

static int position_state_changed_listener(const struct zmk_event_header *eh) {
    if (!is_position_state_changed(eh)) {
        return 0;
    }

    struct position_state_changed *ev = cast_position_state_changed(eh);
    if (ev->state) { // keydown
        return position_state_down(ev);
    } else { // keyup
        return position_state_up(ev);
    }
}

ZMK_LISTENER(behavior_combo, position_state_changed_listener);
ZMK_SUBSCRIPTION(behavior_combo, position_state_changed);

static const struct behavior_driver_api behavior_combo_driver_api = {
    .binding_pressed = NULL,
    .binding_released = NULL,
};

static int behavior_combo_init(const struct device *dev) {
    k_delayed_work_init(&timeout_task, combo_timeout_handler);
    return initialize_combo((struct combo_t *)dev->config);
}

// todo: remove this once #506 is merged and #include <zmk/keymap.h>
#define KEY_BINDING_TO_STRUCT(idx, drv_inst)                                                       \
    {                                                                                              \
        .behavior_dev = DT_LABEL(DT_PHANDLE_BY_IDX(drv_inst, bindings, idx)),                      \
        .param1 = COND_CODE_0(DT_PHA_HAS_CELL_AT_IDX(drv_inst, bindings, idx, param1), (0),        \
                              (DT_PHA_BY_IDX(drv_inst, bindings, idx, param1))),                   \
        .param2 = COND_CODE_0(DT_PHA_HAS_CELL_AT_IDX(drv_inst, bindings, idx, param2), (0),        \
                              (DT_PHA_BY_IDX(drv_inst, bindings, idx, param2))),                   \
    }

#define KP_INST(n)                                                                                 \
    static struct combo_t behavior_combo_config_##n = {                                            \
        .timeout_ms = DT_INST_PROP(n, timeout_ms),                                                 \
        .key_positions = DT_INST_PROP(n, key_positions),                                           \
        .key_position_len = DT_INST_PROP_LEN(n, key_positions),                                    \
        .behavior = KEY_BINDING_TO_STRUCT(0, DT_DRV_INST(n)),                                      \
        .virtual_key_position = n + ZMK_KEYMAP_LEN,                                                \
        .slow_release = DT_INST_PROP(n, slow_release),                                             \
    };                                                                                             \
    DEVICE_AND_API_INIT(behavior_combo_##n, DT_INST_LABEL(n), behavior_combo_init,                 \
                        &behavior_combo_data, &behavior_combo_config_##n, APPLICATION,             \
                        CONFIG_KERNEL_INIT_PRIORITY_DEFAULT, &behavior_combo_driver_api);

DT_INST_FOREACH_STATUS_OKAY(KP_INST)

#endif