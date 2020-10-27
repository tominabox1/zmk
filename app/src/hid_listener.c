/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <drivers/behavior.h>
#include <logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/event-manager.h>
#include <zmk/events/keycode-state-changed.h>
#include <zmk/events/modifiers-state-changed.h>
#include <zmk/hid.h>
#include <zmk/endpoints.h>

static int hid_listener_keycode_pressed(u8_t usage_page, u32_t keycode, zmk_mod_flags modifiers) {
    int err;
    LOG_DBG("usage_page 0x%02X keycode 0x%02X mods 0x%02X", usage_page, keycode, modifiers);
    if (modifiers) {
        zmk_hid_register_mods(modifiers);
    }
    switch (usage_page) {
    case USAGE_KEYPAD:
        err = zmk_hid_keypad_press(keycode);
        if (err) {
            LOG_ERR("Unable to press keycode");
            return err;
        }
        break;
    case USAGE_CONSUMER:
        err = zmk_hid_consumer_press(keycode);
        if (err) {
            LOG_ERR("Unable to press keycode");
            return err;
        }
        break;
    }

    return zmk_endpoints_send_report(usage_page);
}

static int hid_listener_keycode_released(u8_t usage_page, u32_t keycode, zmk_mod_flags modifiers) {
    int err;
    LOG_DBG("usage_page 0x%02X keycode 0x%02X mods 0x%02X", usage_page, keycode, modifiers);
    if (modifiers) {
        zmk_hid_unregister_mods(modifiers);
    }
    switch (usage_page) {
    case USAGE_KEYPAD:
        err = zmk_hid_keypad_release(keycode);
        if (err) {
            LOG_ERR("Unable to release keycode");
            return err;
        }
        break;
    case USAGE_CONSUMER:
        err = zmk_hid_consumer_release(keycode);
        if (err) {
            LOG_ERR("Unable to release keycode");
            return err;
        }
    }
    return zmk_endpoints_send_report(usage_page);
}

int hid_listener(const struct zmk_event_header *eh) {
    if (is_keycode_state_changed(eh)) {
        const struct keycode_state_changed *ev = cast_keycode_state_changed(eh);
        if (ev->state) {
            hid_listener_keycode_pressed(ev->usage_page, ev->keycode, ev->mods);
        } else {
            hid_listener_keycode_released(ev->usage_page, ev->keycode, ev->mods);
        }
    }
    return 0;
}

ZMK_LISTENER(hid_listener, hid_listener);
ZMK_SUBSCRIPTION(hid_listener, keycode_state_changed);
ZMK_SUBSCRIPTION(hid_listener, modifiers_state_changed);