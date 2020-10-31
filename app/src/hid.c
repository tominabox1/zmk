/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/hid.h>
#include <dt-bindings/zmk/keys.h>

static struct zmk_hid_keypad_report kp_report = {
    .report_id = 1, .body = {.modifiers = 0, ._reserved = 0, .keys = {0}}};

static struct zmk_hid_consumer_report consumer_report = {.report_id = 2, .body = {.keys = {0}}};

// Keep track of how often a modifier was pressed.
// Only release the modifier if the count is 0.
static int modifier_counts[8] = {0, 0, 0, 0, 0, 0, 0, 0};

int zmk_hid_register_mod(zmk_mod modifier) {
    modifier_counts[modifier]++;
    LOG_DBG("Modifier %d count %d", modifier, modifier_counts[modifier]);
    WRITE_BIT(kp_report.body.modifiers, modifier, true);
    return 0;
}

int zmk_hid_unregister_mod(zmk_mod modifier) {
    if (modifier >= 8) {
        LOG_ERR("This modifier does not exist %d", modifier);
        return -EINVAL;
    }
    if (modifier_counts[modifier] <= 0) {
        LOG_ERR("Tried to unregister modifier %d too often", modifier);
        return -EINVAL;
    }
    modifier_counts[modifier]--;
    LOG_DBG("Modifier %d count: %d", modifier, modifier_counts[modifier]);
    if (modifier_counts[modifier] == 0) {
        LOG_DBG("Modifier %d released", modifier);
        WRITE_BIT(kp_report.body.modifiers, modifier, false);
    }
    return 0;
}

int zmk_hid_register_mods(zmk_mod_flags modifiers) {
    for (int i = 0; i < 8; i++) {
        if ((modifiers >> i) & 1) {
            int ret;
            if ((ret = zmk_hid_register_mod(i)) < 0) {
                return ret;
            }
        }
    }
    return 0;
}

int zmk_hid_unregister_mods(zmk_mod_flags modifiers) {
    for (int i = 0; i < 8; i++) {
        if ((modifiers >> i) & 1) {
            int ret;
            if ((ret = zmk_hid_unregister_mod(i)) < 0) {
                return ret;
            }
        }
    }
    return 0;
}

#define TOGGLE_KEYPAD(match, val)                                                                  \
    for (int idx = 0; idx < ZMK_HID_KEYPAD_NKRO_SIZE; idx++) {                                     \
        if (kp_report.body.keys[idx] != match) {                                                   \
            continue;                                                                              \
        }                                                                                          \
        kp_report.body.keys[idx] = val;                                                            \
        break;                                                                                     \
    }

#define TOGGLE_CONSUMER(match, val)                                                                \
    for (int idx = 0; idx < ZMK_HID_CONSUMER_NKRO_SIZE; idx++) {                                   \
        if (consumer_report.body.keys[idx] != match) {                                             \
            continue;                                                                              \
        }                                                                                          \
        consumer_report.body.keys[idx] = val;                                                      \
        break;                                                                                     \
    }

int zmk_hid_keypad_press(zmk_key code) {
    if (code >= LEFT_CONTROL && code <= RIGHT_GUI) {
        return zmk_hid_register_mod(code - LEFT_CONTROL);
    }
    TOGGLE_KEYPAD(0U, code);
    return 0;
};

int zmk_hid_keypad_release(zmk_key code) {
    if (code >= LEFT_CONTROL && code <= RIGHT_GUI) {
        return zmk_hid_unregister_mod(code - LEFT_CONTROL);
    }
    TOGGLE_KEYPAD(code, 0U);
    return 0;
};

void zmk_hid_keypad_clear() { memset(&kp_report.body, 0, sizeof(kp_report.body)); }

int zmk_hid_consumer_press(zmk_key code) {
    TOGGLE_CONSUMER(0U, code);
    return 0;
};

int zmk_hid_consumer_release(zmk_key code) {
    TOGGLE_CONSUMER(code, 0U);
    return 0;
};

void zmk_hid_consumer_clear() { memset(&consumer_report.body, 0, sizeof(consumer_report.body)); }

struct zmk_hid_keypad_report *zmk_hid_get_keypad_report() {
    return &kp_report;
}

struct zmk_hid_consumer_report *zmk_hid_get_consumer_report() {
    return &consumer_report;
}
