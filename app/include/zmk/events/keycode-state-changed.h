/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr.h>
#include <dt-bindings/zmk/keys.h>
#include <zmk/event-manager.h>

struct keycode_state_changed {
    struct zmk_event_header header;
    u8_t usage_page;
    u32_t keycode;
    u8_t mods;
    bool state;
};

ZMK_EVENT_DECLARE(keycode_state_changed);

static inline struct keycode_state_changed *create_keycode_state_changed(u8_t usage_page, u32_t keycode, bool state) {
    struct keycode_state_changed *ev = new_keycode_state_changed();
    ev->usage_page = usage_page;
    // this is ugly and after merging https://github.com/zmkfirmware/zmk/pull/300
    // should move into the keycode_state_changed_from_encoded method
    // discuss: should we keep LCTL and MOD_LCTL even though it causes this ugly code?
    u32_t clean_keycode = STRIP_MODS(keycode);
    if (clean_keycode >= LCTL && clean_keycode <= RGUI) {
        ev->mods = 1 << clean_keycode - LCTL;
        ev->keycode = 0;
    } else {
        ev->mods = 0;
        ev->keycode = clean_keycode;
    }
    ev->mods = ev->mods | SELECT_MODS(keycode); 
    ev->state = state;
    return ev;
}
