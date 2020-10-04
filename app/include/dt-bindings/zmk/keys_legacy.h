/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/hid_usage.h>

/* Keyboard Non-US # and ~ (Non-US Hash/Number and Tilde) */
#define TILD (HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE)

/* Keyboard ' and " (Apostrophe and Quote) */
#define QUOT (HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)

/* Keyboard ` and ~ (Grave Accent and Tilde) */
#define GRAV (HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)

/* Keyboard Scroll Lock */
#define SCLK (HID_USAGE_KEY_KEYBOARD_SCROLL_LOCK)

/* Keyboard Pause/Break */
#define PAUS (HID_USAGE_KEY_KEYBOARD_PAUSE)

/* Keyboard Right Arrow */
#define RARW (HID_USAGE_KEY_KEYBOARD_RIGHTARROW)

/* Keyboard Left Arrow */
#define LARW (HID_USAGE_KEY_KEYBOARD_LEFTARROW)

/* Keyboard Down Arrow */
#define DARW (HID_USAGE_KEY_KEYBOARD_DOWNARROW)

/* Keyboard Up Arrow */
#define UARW (HID_USAGE_KEY_KEYBOARD_UPARROW)

/* Keypad / (Slash/Divide) */
#define KDIV (HID_USAGE_KEY_KEYPAD_SLASH)

/* Keypad * (Multiply) */
#define KMLT (HID_USAGE_KEY_KEYPAD_ASTERISK)

/* Keypad - (Minus) */
#define KMIN (HID_USAGE_KEY_KEYPAD_MINUS)

/* Keypad + (Plus) */
#define KPLS (HID_USAGE_KEY_KEYPAD_PLUS)

/* Keypad ( (Left Parenthesis) */
#define LPRN (HID_USAGE_KEY_KEYPAD_LEFT_PARENTHESIS)

/* Keypad ) (Right Parenthesis) */
#define RPRN (HID_USAGE_KEY_KEYPAD_RIGHT_PARENTHESIS)

/* Keypad { (Left Brace) */
#define LCUR (HID_USAGE_KEY_KEYPAD_LEFT_BRACE)

/* Keypad } (Right Brace) */
#define RCUR (HID_USAGE_KEY_KEYPAD_RIGHT_BRACE)

/* Keypad ^ (Caret) */
#define CRRT (HID_USAGE_KEY_KEYPAD_CARET)

/* Keypad % (Percent) */
#define PRCT (HID_USAGE_KEY_KEYPAD_PERCENT)

/* Keypad > (Greater Than) */
#define LABT (HID_USAGE_KEY_KEYPAD_LESS_THAN)

/* Keypad < (Less Than) */
#define RABT (HID_USAGE_KEY_KEYPAD_GREATER_THAN)

/* Keypad & (Ampersand) */
#define AMPS (HID_USAGE_KEY_KEYPAD_AMPERSAND)

/* Keypad | (Pipe) */
#define PIPE (HID_USAGE_KEY_KEYPAD_PIPE)

/* Keypad : (Colon) */
#define COLN (HID_USAGE_KEY_KEYPAD_COLON)

/* Keypad # (Hash/Number) */
#define HASH (HID_USAGE_KEY_KEYPAD_HASH)

/* Keypad Space */
#define KSPC (HID_USAGE_KEY_KEYPAD_SPACE)

/* Keypad @ (At Sign) */
#define ATSN (HID_USAGE_KEY_KEYPAD_AT)

/* Keypad ! (Exclamation) */
#define BANG (HID_USAGE_KEY_KEYPAD_EXCLAMATION)

/* Consumer Scan Next Track */
#define M_NEXT (HID_USAGE_CONSUMER_SCAN_NEXT_TRACK)

/* Consumer Scan Previous Track */
#define M_PREV (HID_USAGE_CONSUMER_SCAN_PREVIOUS_TRACK)

/* Consumer Stop */
#define M_STOP (HID_USAGE_CONSUMER_STOP)

/* Consumer Eject */
#define M_EJCT (HID_USAGE_CONSUMER_EJECT)

/* Consumer Play/Pause */
#define M_PLAY (HID_USAGE_CONSUMER_PLAY_PAUSE)

/* Consumer Mute */
#define M_MUTE (HID_USAGE_CONSUMER_MUTE)

/* Consumer Volume Increment */
#define M_VOLU (HID_USAGE_CONSUMER_VOLUME_INCREMENT)

/* Consumer Volume Decrement */
#define M_VOLD (HID_USAGE_CONSUMER_VOLUME_DECREMENT)