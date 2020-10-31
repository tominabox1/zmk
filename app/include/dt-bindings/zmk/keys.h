/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <zmk/hid_usage.h>

/* System Power Down */
#define SYSTEM_POWER (HID_USAGE_GD_SYSTEM_POWER_DOWN)
#define SYS_PWR (SYSTEM_POWER)

/* System Sleep */
#define SYSTEM_SLEEP (HID_USAGE_GD_SYSTEM_SLEEP)
#define SYS_SLEEP (SYSTEM_SLEEP)

/* System Wake Up */
#define SYSTEM_WAKE_UP (HID_USAGE_GD_SYSTEM_WAKE_UP)
#define SYS_WAKE (SYSTEM_WAKE_UP)

/* Keyboard a and A */
#define A (HID_USAGE_KEY_KEYBOARD_A)

/* Keyboard b and B */
#define B (HID_USAGE_KEY_KEYBOARD_B)

/* Keyboard c and C */
#define C (HID_USAGE_KEY_KEYBOARD_C)

/* Keyboard d and D */
#define D (HID_USAGE_KEY_KEYBOARD_D)

/* Keyboard e and E */
#define E (HID_USAGE_KEY_KEYBOARD_E)

/* Keyboard f and F */
#define F (HID_USAGE_KEY_KEYBOARD_F)

/* Keyboard g and G */
#define G (HID_USAGE_KEY_KEYBOARD_G)

/* Keyboard h and H */
#define H (HID_USAGE_KEY_KEYBOARD_H)

/* Keyboard i and I */
#define I (HID_USAGE_KEY_KEYBOARD_I)

/* Keyboard j and J */
#define J (HID_USAGE_KEY_KEYBOARD_J)

/* Keyboard k and K */
#define K (HID_USAGE_KEY_KEYBOARD_K)

/* Keyboard l and L */
#define L (HID_USAGE_KEY_KEYBOARD_L)

/* Keyboard m and M */
#define M (HID_USAGE_KEY_KEYBOARD_M)

/* Keyboard n and N */
#define N (HID_USAGE_KEY_KEYBOARD_N)

/* Keyboard o and O */
#define O (HID_USAGE_KEY_KEYBOARD_O)

/* Keyboard p and P */
#define P (HID_USAGE_KEY_KEYBOARD_P)

/* Keyboard q and Q */
#define Q (HID_USAGE_KEY_KEYBOARD_Q)

/* Keyboard r and R */
#define R (HID_USAGE_KEY_KEYBOARD_R)

/* Keyboard s and S */
#define S (HID_USAGE_KEY_KEYBOARD_S)

/* Keyboard t and T */
#define T (HID_USAGE_KEY_KEYBOARD_T)

/* Keyboard u and U */
#define U (HID_USAGE_KEY_KEYBOARD_U)

/* Keyboard v and V */
#define V (HID_USAGE_KEY_KEYBOARD_V)

/* Keyboard w and W */
#define W (HID_USAGE_KEY_KEYBOARD_W)

/* Keyboard x and X */
#define X (HID_USAGE_KEY_KEYBOARD_X)

/* Keyboard y and Y */
#define Y (HID_USAGE_KEY_KEYBOARD_Y)

/* Keyboard z and Z */
#define Z (HID_USAGE_KEY_KEYBOARD_Z)

/* Keyboard 1 and ! (Exclamation) */
#define NUMBER_1 (HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)
#define N1 (NUMBER_1)
#define NUM_1 (NUMBER_1) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 2 and @ (At sign) */
#define NUMBER_2 (HID_USAGE_KEY_KEYBOARD_2_AND_AT)
#define N2 (NUMBER_2)
#define NUM_2 (NUMBER_2) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 3 and # (Hash/Number) */
#define NUMBER_3 (HID_USAGE_KEY_KEYBOARD_3_AND_HASH)
#define N3 (NUMBER_3)
#define NUM_3 (NUMBER_3) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 4 and $ (Dollar) */
#define NUMBER_4 (HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)
#define N4 (NUMBER_4)
#define NUM_4 (NUMBER_4) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 5 and % (Percent) */
#define NUMBER_5 (HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)
#define N5 (NUMBER_5)
#define NUM_5 (NUMBER_5) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 6 and ^ (Caret) */
#define NUMBER_6 (HID_USAGE_KEY_KEYBOARD_6_AND_CARET)
#define N6 (NUMBER_6)
#define NUM_6 (NUMBER_6) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 7 and & (Ampersand) */
#define NUMBER_7 (HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)
#define N7 (NUMBER_7)
#define NUM_7 (NUMBER_7) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 8 and * (Asterisk) */
#define NUMBER_8 (HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)
#define N8 (NUMBER_8)
#define NUM_8 (NUMBER_8) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 9 and ( (Left Parenthesis) */
#define NUMBER_9 (HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)
#define N9 (NUMBER_9)
#define NUM_9 (NUMBER_9) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard 0 and ) (Right Parenthesis) */
#define NUMBER_0 (HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)
#define N0 (NUMBER_0)
#define NUM_0 (NUMBER_0) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Return (Enter) */
#define RETURN (HID_USAGE_KEY_KEYBOARD_RETURN_ENTER)
#define ENTER (RETURN)
#define RET (RETURN)

/* Keyboard Escape */
#define ESCAPE (HID_USAGE_KEY_KEYBOARD_ESCAPE)
#define ESC (ESCAPE)

/* Keyboard Backspace */
#define BACKSPACE (HID_USAGE_KEY_KEYBOARD_DELETE_BACKSPACE)
#define BSPC (BACKSPACE)
#define BKSP (BACKSPACE) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Tab */
#define TAB (HID_USAGE_KEY_KEYBOARD_TAB)

/* Keyboard Space */
#define SPACE (HID_USAGE_KEY_KEYBOARD_SPACEBAR)
#define SPC (SPACE) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard - and _ (Minus and Underscore) */
#define MINUS (HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)

/* Keyboard = and + (Equal and Plus) */
#define EQUAL (HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)
#define EQL (EQUAL) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard [ and { (Left Bracket and Left Brace) */
#define LEFT_BRACKET (HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)
#define LBKT (LEFT_BRACKET)

/* Keyboard ] and } (Right Bracket and Right Brace) */
#define RIGHT_BRACKET (HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)
#define RBKT (RIGHT_BRACKET)

/* Keyboard \ and | (Backslash and Pipe) */
#define BACKSLASH (HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)
#define BSLH (BACKSLASH)

/* Keyboard Non-US # and ~ (Non-US Hash/Number and Tilde) */
#define NON_US_HASH (HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE)
#define TILD (NON_US_HASH) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard ; and : (Semicolon and Colon) */
#define SEMICOLON (HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)
#define SEMI (SEMICOLON)
#define SCLN (SEMICOLON) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard ' and " (Apostrophe and Quote) */
#define APOSTROPHE (HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)
#define APOS (APOSTROPHE)
#define QUOTE (APOSTROPHE)
#define QUOT (APOSTROPHE) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard ` and ~ (Grave Accent and Tilde) */
#define GRAVE (HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)
#define GRAV (GRAVE) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard , and < (Comma and Less Than) */
#define COMMA (HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)
#define CMMA (COMMA) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard . and > (Period and Greater Than) */
#define PERIOD (HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)
#define DOT (PERIOD)

/* Keyboard / and ? (Forward Slash and Question) */
#define SLASH (HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)
#define FSLH (SLASH)

/* Keyboard Caps Lock */
#define CAPSLOCK (HID_USAGE_KEY_KEYBOARD_CAPS_LOCK)
#define CAPS (CAPSLOCK)
#define CLCK (CAPSLOCK)

/* Keyboard F1 */
#define F1 (HID_USAGE_KEY_KEYBOARD_F1)

/* Keyboard F2 */
#define F2 (HID_USAGE_KEY_KEYBOARD_F2)

/* Keyboard F3 */
#define F3 (HID_USAGE_KEY_KEYBOARD_F3)

/* Keyboard F4 */
#define F4 (HID_USAGE_KEY_KEYBOARD_F4)

/* Keyboard F5 */
#define F5 (HID_USAGE_KEY_KEYBOARD_F5)

/* Keyboard F6 */
#define F6 (HID_USAGE_KEY_KEYBOARD_F6)

/* Keyboard F7 */
#define F7 (HID_USAGE_KEY_KEYBOARD_F7)

/* Keyboard F8 */
#define F8 (HID_USAGE_KEY_KEYBOARD_F8)

/* Keyboard F9 */
#define F9 (HID_USAGE_KEY_KEYBOARD_F9)

/* Keyboard F10 */
#define F10 (HID_USAGE_KEY_KEYBOARD_F10)

/* Keyboard F11 */
#define F11 (HID_USAGE_KEY_KEYBOARD_F11)

/* Keyboard F12 */
#define F12 (HID_USAGE_KEY_KEYBOARD_F12)

/* Keyboard Print Screen */
#define PRINTSCREEN (HID_USAGE_KEY_KEYBOARD_PRINTSCREEN)
#define PSCRN (PRINTSCREEN)
#define PRSC (PRINTSCREEN) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Scroll Lock */
#define SCROLLLOCK (HID_USAGE_KEY_KEYBOARD_SCROLL_LOCK)
#define SLCK (SCROLLLOCK)
#define SCLK (SCROLLLOCK) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Pause/Break */
#define PAUSE_BREAK (HID_USAGE_KEY_KEYBOARD_PAUSE)
#define PAUS (PAUSE_BREAK) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Insert */
#define INSERT (HID_USAGE_KEY_KEYBOARD_INSERT)
#define INS (INSERT)

/* Keyboard Home */
#define HOME (HID_USAGE_KEY_KEYBOARD_HOME)

/* Keyboard Page Up */
#define PAGE_UP (HID_USAGE_KEY_KEYBOARD_PAGEUP)
#define PG_UP (PAGE_UP)
#define PGUP (PAGE_UP) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Delete */
#define DELETE (HID_USAGE_KEY_KEYBOARD_DELETE_FORWARD)
#define DEL (DELETE)

/* Keyboard End */
#define END (HID_USAGE_KEY_KEYBOARD_END)

/* Keyboard Page Down */
#define PAGE_DOWN (HID_USAGE_KEY_KEYBOARD_PAGEDOWN)
#define PG_DN (PAGE_DOWN)
#define PGDN (PAGE_DOWN) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Right Arrow */
#define RIGHT_ARROW (HID_USAGE_KEY_KEYBOARD_RIGHTARROW)
#define RIGHT (RIGHT_ARROW)
#define RARW (RIGHT_ARROW) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Left Arrow */
#define LEFT_ARROW (HID_USAGE_KEY_KEYBOARD_LEFTARROW)
#define LEFT (LEFT_ARROW)
#define LARW (LEFT_ARROW) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Down Arrow */
#define DOWN_ARROW (HID_USAGE_KEY_KEYBOARD_DOWNARROW)
#define DOWN (DOWN_ARROW)
#define DARW (DOWN_ARROW) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Up Arrow */
#define UP_ARROW (HID_USAGE_KEY_KEYBOARD_UPARROW)
#define UP (UP_ARROW)
#define UARW (UP_ARROW) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad Numlock and Clear */
#define KP_NUMLOCK (HID_USAGE_KEY_KEYPAD_NUM_LOCK_AND_CLEAR)
#define KP_NUM (KP_NUMLOCK)
#define KP_NLCK (KP_NUMLOCK)

/* Keypad / (Slash/Divide) */
#define KP_DIVIDE (HID_USAGE_KEY_KEYPAD_SLASH)
#define KP_SLASH (KP_DIVIDE)
#define KDIV (KP_DIVIDE) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad * (Multiply) */
#define KP_MULTIPLY (HID_USAGE_KEY_KEYPAD_ASTERISK)
#define KP_ASTERISK (KP_MULTIPLY)
#define KMLT (KP_MULTIPLY) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad - (Minus) */
#define KP_MINUS (HID_USAGE_KEY_KEYPAD_MINUS)
#define KP_SUBTRACT (KP_MINUS)
#define KMIN (KP_MINUS) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad + (Plus) */
#define KP_PLUS (HID_USAGE_KEY_KEYPAD_PLUS)
#define KPLS (KP_PLUS) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad Enter */
#define KP_ENTER (HID_USAGE_KEY_KEYPAD_ENTER)

/* Keypad 1 */
#define KP_NUMBER_1 (HID_USAGE_KEY_KEYPAD_1_AND_END)
#define KP_N1 (KP_NUMBER_1)

/* Keypad 2 */
#define KP_NUMBER_2 (HID_USAGE_KEY_KEYPAD_2_AND_DOWN_ARROW)
#define KP_N2 (KP_NUMBER_2)

/* Keypad 3 */
#define KP_NUMBER_3 (HID_USAGE_KEY_KEYPAD_3_AND_PAGEDN)
#define KP_N3 (KP_NUMBER_3)

/* Keypad 4 */
#define KP_NUMBER_4 (HID_USAGE_KEY_KEYPAD_4_AND_LEFT_ARROW)
#define KP_N4 (KP_NUMBER_4)

/* Keypad 5 */
#define KP_NUMBER_5 (HID_USAGE_KEY_KEYPAD_5)
#define KP_N5 (KP_NUMBER_5)

/* Keypad 6 */
#define KP_NUMBER_6 (HID_USAGE_KEY_KEYPAD_6_AND_RIGHT_ARROW)
#define KP_N6 (KP_NUMBER_6)

/* Keypad 7 */
#define KP_NUMBER_7 (HID_USAGE_KEY_KEYPAD_7_AND_HOME)
#define KP_N7 (KP_NUMBER_7)

/* Keypad 8 */
#define KP_NUMBER_8 (HID_USAGE_KEY_KEYPAD_8_AND_UP_ARROW)
#define KP_N8 (KP_NUMBER_8)

/* Keypad 9 */
#define KP_NUMBER_9 (HID_USAGE_KEY_KEYPAD_9_AND_PAGEUP)
#define KP_N9 (KP_NUMBER_9)

/* Keypad 0 */
#define KP_NUMBER_0 (HID_USAGE_KEY_KEYPAD_0_AND_INSERT)
#define KP_N0 (KP_NUMBER_0)

/* Keypad . (Dot) */
#define KP_DOT (HID_USAGE_KEY_KEYPAD_PERIOD_AND_DELETE)

/* Keyboard Non-US \ and | (Non-us Backslash and Pipe) */
#define NON_US_BACKSLASH (HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)
#define NON_US_BSLH (NON_US_BACKSLASH)

/* Keyboard GUI (Windows / Command / Meta) */
#define GUI (HID_USAGE_KEY_KEYBOARD_APPLICATION)
#define WIN (GUI)
#define COMMAND (GUI)
#define CMD (GUI)
#define META (GUI)

/* Keyboard Power */
#define K_POWER (HID_USAGE_KEY_KEYBOARD_POWER)
#define K_PWR (K_POWER)

/* Keypad = (Equal) */
#define KP_EQUAL (HID_USAGE_KEY_KEYPAD_EQUAL)

/* Keyboard F13 */
#define F13 (HID_USAGE_KEY_KEYBOARD_F13)

/* Keyboard F14 */
#define F14 (HID_USAGE_KEY_KEYBOARD_F14)

/* Keyboard F15 */
#define F15 (HID_USAGE_KEY_KEYBOARD_F15)

/* Keyboard F16 */
#define F16 (HID_USAGE_KEY_KEYBOARD_F16)

/* Keyboard F17 */
#define F17 (HID_USAGE_KEY_KEYBOARD_F17)

/* Keyboard F18 */
#define F18 (HID_USAGE_KEY_KEYBOARD_F18)

/* Keyboard F19 */
#define F19 (HID_USAGE_KEY_KEYBOARD_F19)

/* Keyboard F20 */
#define F20 (HID_USAGE_KEY_KEYBOARD_F20)

/* Keyboard F21 */
#define F21 (HID_USAGE_KEY_KEYBOARD_F21)

/* Keyboard F22 */
#define F22 (HID_USAGE_KEY_KEYBOARD_F22)

/* Keyboard F23 */
#define F23 (HID_USAGE_KEY_KEYBOARD_F23)

/* Keyboard F24 */
#define F24 (HID_USAGE_KEY_KEYBOARD_F24)

/* Keyboard Execute */
#define K_EXECUTE (HID_USAGE_KEY_KEYBOARD_EXECUTE)
#define K_EXEC (K_EXECUTE)

/* Keyboard Help */
#define K_HELP (HID_USAGE_KEY_KEYBOARD_HELP)

/* Keyboard Menu */
#define K_MENU (HID_USAGE_KEY_KEYBOARD_MENU)

/* Keyboard Select */
#define K_SELECT (HID_USAGE_KEY_KEYBOARD_SELECT)

/* Keyboard Stop */
#define K_STOP (HID_USAGE_KEY_KEYBOARD_STOP)

/* Keyboard Again */
#define K_AGAIN (HID_USAGE_KEY_KEYBOARD_AGAIN)
#define K_REDO (K_AGAIN)

/* Keyboard Undo */
#define K_UNDO (HID_USAGE_KEY_KEYBOARD_UNDO)
#define UNDO (K_UNDO) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Cut */
#define K_CUT (HID_USAGE_KEY_KEYBOARD_CUT)
#define CUT (K_CUT) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Copy */
#define K_COPY (HID_USAGE_KEY_KEYBOARD_COPY)
#define COPY (K_COPY) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Paste */
#define K_PASTE (HID_USAGE_KEY_KEYBOARD_PASTE)
#define PSTE (K_PASTE) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Find */
#define K_FIND (HID_USAGE_KEY_KEYBOARD_FIND)

/* Keyboard Mute */
#define K_MUTE (HID_USAGE_KEY_KEYBOARD_MUTE)

/* Keyboard Volume Up */
#define K_VOLUME_UP (HID_USAGE_KEY_KEYBOARD_VOLUME_UP)
#define K_VOL_UP (K_VOLUME_UP)
#define VOLU (K_VOLUME_UP) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Volume Down */
#define K_VOLUME_DOWN (HID_USAGE_KEY_KEYBOARD_VOLUME_DOWN)
#define K_VOL_DN (K_VOLUME_DOWN)
#define VOLD (K_VOLUME_DOWN) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Locking Caps Lock */
#define LOCKING_CAPS (HID_USAGE_KEY_KEYBOARD_LOCKING_CAPS_LOCK)
#define LCAPS (LOCKING_CAPS)

/* Keyboard Locking Num Lock */
#define LOCKING_NUM (HID_USAGE_KEY_KEYBOARD_LOCKING_NUM_LOCK)
#define LNLCK (LOCKING_NUM)

/* Keyboard Locking Scroll Lock */
#define LOCKING_SCROLL (HID_USAGE_KEY_KEYBOARD_LOCKING_SCROLL_LOCK)
#define LSLCK (LOCKING_SCROLL)

/* Keypad , (Comma) */
#define KP_COMMA (HID_USAGE_KEY_KEYPAD_COMMA)

/* Keypad = (Equal) AS/400 */
#define KP_EQUAL_AS400 (HID_USAGE_KEY_KEYPAD_EQUAL_SIGN)

/* Keyboard International 1 */
#define INTERNATIONAL_1 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL1)
#define INT1 (INTERNATIONAL_1)
#define INT_RO (INTERNATIONAL_1)

/* Keyboard International 2 */
#define INTERNATIONAL_2 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL2)
#define INT2 (INTERNATIONAL_2)
#define INT_KATAKANAHIRAGANA (INTERNATIONAL_2)
#define INT_KANA (INTERNATIONAL_2)

/* Keyboard International 3 */
#define INTERNATIONAL_3 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL3)
#define INT3 (INTERNATIONAL_3)
#define INT_YEN (INTERNATIONAL_3)

/* Keyboard International 4 */
#define INTERNATIONAL_4 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL4)
#define INT4 (INTERNATIONAL_4)
#define INT_HENKAN (INTERNATIONAL_4)

/* Keyboard International 5 */
#define INTERNATIONAL_5 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL5)
#define INT5 (INTERNATIONAL_5)
#define INT_MUHENKAN (INTERNATIONAL_5)

/* Keyboard International 6 */
#define INTERNATIONAL_6 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL6)
#define INT6 (INTERNATIONAL_6)
#define INT_KPJPCOMMA (INTERNATIONAL_6)

/* Keyboard International 7 */
#define INTERNATIONAL_7 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL7)
#define INT7 (INTERNATIONAL_7)

/* Keyboard International 8 */
#define INTERNATIONAL_8 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL8)
#define INT8 (INTERNATIONAL_8)

/* Keyboard International 9 */
#define INTERNATIONAL_9 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL9)
#define INT9 (INTERNATIONAL_9)

/* Keyboard Language 1 */
#define LANGUAGE_1 (HID_USAGE_KEY_KEYBOARD_LANG1)
#define LANG1 (LANGUAGE_1)
#define LANG_HANGEUL (LANGUAGE_1)

/* Keyboard Language 2 */
#define LANGUAGE_2 (HID_USAGE_KEY_KEYBOARD_LANG2)
#define LANG2 (LANGUAGE_2)
#define LANG_HANJA (LANGUAGE_2)

/* Keyboard Language 3 */
#define LANGUAGE_3 (HID_USAGE_KEY_KEYBOARD_LANG3)
#define LANG3 (LANGUAGE_3)
#define LANG_KATAKANA (LANGUAGE_3)

/* Keyboard Language 4 */
#define LANGUAGE_4 (HID_USAGE_KEY_KEYBOARD_LANG4)
#define LANG4 (LANGUAGE_4)
#define LANG_HIRAGANA (LANGUAGE_4)

/* Keyboard Language 5 */
#define LANGUAGE_5 (HID_USAGE_KEY_KEYBOARD_LANG5)
#define LANG5 (LANGUAGE_5)
#define LANG_ZENKAKUHANKAKU (LANGUAGE_5)

/* Keyboard Language 6 */
#define LANGUAGE_6 (HID_USAGE_KEY_KEYBOARD_LANG6)
#define LANG6 (LANGUAGE_6)

/* Keyboard Language 7 */
#define LANGUAGE_7 (HID_USAGE_KEY_KEYBOARD_LANG7)
#define LANG7 (LANGUAGE_7)

/* Keyboard Language 8 */
#define LANGUAGE_8 (HID_USAGE_KEY_KEYBOARD_LANG8)
#define LANG8 (LANGUAGE_8)

/* Keyboard Language 9 */
#define LANGUAGE_9 (HID_USAGE_KEY_KEYBOARD_LANG9)
#define LANG9 (LANGUAGE_9)

/* Keyboard Alternate Erase */
#define ALT_ERASE (HID_USAGE_KEY_KEYBOARD_ALTERNATE_ERASE)

/* Keyboard SysReq/Attention */
#define SYSREQ (HID_USAGE_KEY_KEYBOARD_SYSREQ_ATTENTION)
#define ATTENTION (SYSREQ)

/* Keyboard Cancel */
#define K_CANCEL (HID_USAGE_KEY_KEYBOARD_CANCEL)

/* Keyboard Clear */
#define CLEAR (HID_USAGE_KEY_KEYBOARD_CLEAR)

/* Keyboard Prior */
#define PRIOR (HID_USAGE_KEY_KEYBOARD_PRIOR)

/* Keyboard Return */
#define RETURN2 (HID_USAGE_KEY_KEYBOARD_RETURN)
#define RET2 (RETURN2)

/* Keyboard Separator */
#define SEPARATOR (HID_USAGE_KEY_KEYBOARD_SEPARATOR)

/* Keyboard Out */
#define OUT (HID_USAGE_KEY_KEYBOARD_OUT)

/* Keyboard Oper */
#define OPER (HID_USAGE_KEY_KEYBOARD_OPER)

/* Keyboard Clear/Again */
#define CLEAR_AGAIN (HID_USAGE_KEY_KEYBOARD_CLEAR_AGAIN)

/* Keyboard CrSel/Props */
#define CRSEL (HID_USAGE_KEY_KEYBOARD_CRSEL_PROPS)

/* Keyboard ExSel */
#define EXSEL (HID_USAGE_KEY_KEYBOARD_EXSEL)

/* Keyboard Currency Unit */
#define CURU (HID_USAGE_KEY_CURRENCY_UNIT) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad ( (Left Parenthesis) */
#define KP_LEFT_PARENTHESIS (HID_USAGE_KEY_KEYPAD_LEFT_PARENTHESIS)
#define KP_LPAR (KP_LEFT_PARENTHESIS)
#define LPRN (KP_LEFT_PARENTHESIS) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad ) (Right Parenthesis) */
#define KP_RIGHT_PARENTHESIS (HID_USAGE_KEY_KEYPAD_RIGHT_PARENTHESIS)
#define KP_RPAR (KP_RIGHT_PARENTHESIS)
#define RPRN (KP_RIGHT_PARENTHESIS) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad { (Left Brace) */
#define LCUR (HID_USAGE_KEY_KEYPAD_LEFT_BRACE) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad } (Right Brace) */
#define RCUR (HID_USAGE_KEY_KEYPAD_RIGHT_BRACE) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad ^ (Caret) */
#define CRRT (HID_USAGE_KEY_KEYPAD_CARET) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad % (Percent) */
#define PRCT (HID_USAGE_KEY_KEYPAD_PERCENT) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad > (Greater Than) */
#define LABT (HID_USAGE_KEY_KEYPAD_LESS_THAN) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad < (Less Than) */
#define RABT (HID_USAGE_KEY_KEYPAD_GREATER_THAN) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad & (Ampersand) */
#define AMPS (HID_USAGE_KEY_KEYPAD_AMPERSAND) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad | (Pipe) */
#define PIPE (HID_USAGE_KEY_KEYPAD_PIPE) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad : (Colon) */
#define COLN (HID_USAGE_KEY_KEYPAD_COLON) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad # (Hash/Number) */
#define HASH (HID_USAGE_KEY_KEYPAD_HASH) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad Space */
#define KSPC (HID_USAGE_KEY_KEYPAD_SPACE) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad @ (At Sign) */
#define ATSN (HID_USAGE_KEY_KEYPAD_AT) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad ! (Exclamation) */
#define BANG (HID_USAGE_KEY_KEYPAD_EXCLAMATION) // WARNING: DEPRECATED (DO NOT USE)

/* Keypad Clear */
#define KP_CLEAR (HID_USAGE_KEY_KEYPAD_CLEAR)

/* Keyboard Left Control */
#define LEFT_CONTROL (HID_USAGE_KEY_KEYBOARD_LEFTCONTROL)
#define LCTRL (LEFT_CONTROL)
#define LCTL (LEFT_CONTROL) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Left Shift */
#define LEFT_SHIFT (HID_USAGE_KEY_KEYBOARD_LEFTSHIFT)
#define LSHFT (LEFT_SHIFT)
#define LSFT (LEFT_SHIFT) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Left Alt */
#define LEFT_ALT (HID_USAGE_KEY_KEYBOARD_LEFTALT)
#define LALT (LEFT_ALT)

/* Keyboard Left GUI (Windows / Command / Meta) */
#define LEFT_GUI (HID_USAGE_KEY_KEYBOARD_LEFT_GUI)
#define LGUI (LEFT_GUI)
#define LEFT_WIN (LEFT_GUI)
#define LWIN (LEFT_GUI)
#define LEFT_COMMAND (LEFT_GUI)
#define LCMD (LEFT_GUI)
#define LEFT_META (LEFT_GUI)
#define LMETA (LEFT_GUI)

/* Keyboard Right Control */
#define RIGHT_CONTROL (HID_USAGE_KEY_KEYBOARD_RIGHTCONTROL)
#define RCTRL (RIGHT_CONTROL)
#define RCTL (RIGHT_CONTROL) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Right Shift */
#define RIGHT_SHIFT (HID_USAGE_KEY_KEYBOARD_RIGHTSHIFT)
#define RSHFT (RIGHT_SHIFT)
#define RSFT (RIGHT_SHIFT) // WARNING: DEPRECATED (DO NOT USE)

/* Keyboard Right Alt */
#define RIGHT_ALT (HID_USAGE_KEY_KEYBOARD_RIGHTALT)
#define RALT (RIGHT_ALT)

/* Keyboard Right GUI (Windows / Command / Meta) */
#define RIGHT_GUI (HID_USAGE_KEY_KEYBOARD_RIGHT_GUI)
#define RGUI (RIGHT_GUI)
#define RIGHT_WIN (RIGHT_GUI)
#define RWIN (RIGHT_GUI)
#define RIGHT_COMMAND (RIGHT_GUI)
#define RCMD (RIGHT_GUI)
#define RIGHT_META (RIGHT_GUI)
#define RMETA (RIGHT_GUI)

/* Keyboard Play/Pause */
#define K_PLAY_PAUSE (0xE8)
#define K_PP (K_PLAY_PAUSE)

/* Keyboard Stop */
#define K_STOP2 (0xE9)

/* Keyboard Previous */
#define K_PREVIOUS (0xEA)
#define K_PREV (K_PREVIOUS)

/* Keyboard Next */
#define K_NEXT (0xEB)

/* Keyboard Eject */
#define K_EJECT (0xEC)

/* Keyboard Volume Up */
#define K_VOLUME_UP2 (0xED)
#define K_VOL_UP2 (K_VOLUME_UP2)

/* Keyboard Volume Down */
#define K_VOLUME_DOWN2 (0xEE)
#define K_VOL_DN2 (K_VOLUME_DOWN2)

/* Keyboard Mute */
#define K_MUTE2 (0xEF)

/* Keyboard WWW */
#define K_WWW (0xF0)

/* Keyboard Back */
#define K_BACK (0xF1)

/* Keyboard Forward */
#define K_FORWARD (0xF2)

/* Keyboard Stop */
#define K_STOP3 (0xF3)

/* Keyboard Find */
#define K_FIND2 (0xF4)

/* Keyboard Scroll Up */
#define K_SCROLL_UP (0xF5)

/* Keyboard Scroll Down */
#define K_SCROLL_DOWN (0xF6)

/* Keyboard Edit */
#define K_EDIT (0xF7)

/* Keyboard Sleep */
#define K_SLEEP (0xF8)

/* Keyboard Lock */
#define K_LOCK (0xF9)
#define K_SCREENSAVER (K_LOCK)
#define K_COFFEE (K_LOCK)

/* Keyboard Refresh */
#define K_REFRESH (0xFA)

/* Keyboard Calculator */
#define K_CALCULATOR (0xFB)
#define K_CALC (K_CALCULATOR)

/* Consumer Power */
#define C_POWER (HID_USAGE_CONSUMER_POWER)
#define C_PWR (C_POWER)

/* Consumer Reset */
#define C_RESET (HID_USAGE_CONSUMER_RESET)

/* Consumer Sleep */
#define C_SLEEP (HID_USAGE_CONSUMER_SLEEP)

/* Consumer Sleep Mode */
#define C_SLEEP_MODE (HID_USAGE_CONSUMER_SLEEP_MODE)

/* Consumer Menu */
#define C_MENU (HID_USAGE_CONSUMER_MENU)

/* Consumer Menu Pick */
#define C_MENU_PICK (HID_USAGE_CONSUMER_MENU_PICK)
#define C_MENU_SELECT (C_MENU_PICK)

/* Consumer Menu Up */
#define C_MENU_UP (HID_USAGE_CONSUMER_MENU_UP)

/* Consumer Menu Down */
#define C_MENU_DOWN (HID_USAGE_CONSUMER_MENU_DOWN)

/* Consumer Menu Left */
#define C_MENU_LEFT (HID_USAGE_CONSUMER_MENU_LEFT)

/* Consumer Menu Right */
#define C_MENU_RIGHT (HID_USAGE_CONSUMER_MENU_RIGHT)

/* Consumer Menu Escape */
#define C_MENU_ESCAPE (HID_USAGE_CONSUMER_MENU_ESCAPE)
#define C_MENU_ESC (C_MENU_ESCAPE)

/* Consumer Menu Value Increase */
#define C_MENU_INCREASE (HID_USAGE_CONSUMER_MENU_VALUE_INCREASE)
#define C_MENU_INC (C_MENU_INCREASE)

/* Consumer Menu Value Decrease */
#define C_MENU_DECREASE (HID_USAGE_CONSUMER_MENU_VALUE_DECREASE)
#define C_MENU_DEC (C_MENU_DECREASE)

/* Consumer Data On Screen */
#define C_DATA_ON_SCREEN (HID_USAGE_CONSUMER_DATA_ON_SCREEN)

/* Consumer Closed Caption */
#define C_CAPTIONS (HID_USAGE_CONSUMER_CLOSED_CAPTION)
#define C_SUBTITILES (C_CAPTIONS)

/* Consumer Snapshot */
#define C_SNAPSHOT (HID_USAGE_CONSUMER_SNAPSHOT)

/* Consumer Picture-in-Picture Toggle */
#define C_PIP (HID_USAGE_CONSUMER_PICTURE_IN_PICTURE_TOGGLE)

/* Consumer Red Menu Button */
#define C_RED_BUTTON (HID_USAGE_CONSUMER_RED_MENU_BUTTON)
#define C_RED (C_RED_BUTTON)

/* Consumer Green Menu Button */
#define C_GREEN_BUTTON (HID_USAGE_CONSUMER_GREEN_MENU_BUTTON)
#define C_GREEN (C_GREEN_BUTTON)

/* Consumer Blue Menu Button */
#define C_BLUE_BUTTON (HID_USAGE_CONSUMER_BLUE_MENU_BUTTON)
#define C_BLUE (C_BLUE_BUTTON)

/* Consumer Yellow Menu Button */
#define C_YELLOW_BUTTON (HID_USAGE_CONSUMER_YELLOW_MENU_BUTTON)
#define C_YELLOW (C_YELLOW_BUTTON)

/* Consumer Aspect */
#define C_ASPECT (HID_USAGE_CONSUMER_ASPECT)

/* Consumer Display Brightness Increment */
#define C_BRIGHTNESS_INC (HID_USAGE_CONSUMER_DISPLAY_BRIGHTNESS_INCREMENT)
#define C_BRI_INC (C_BRIGHTNESS_INC)
#define C_BRI_UP (C_BRIGHTNESS_INC)

/* Consumer Display Brightness Decrement */
#define C_BRIGHTNESS_DEC (HID_USAGE_CONSUMER_DISPLAY_BRIGHTNESS_DECREMENT)
#define C_BRI_DEC (C_BRIGHTNESS_DEC)
#define C_BRI_DN (C_BRIGHTNESS_DEC)

/* Consumer Display Backlight Toggle */
#define C_BACKLIGHT_TOGGLE (HID_USAGE_CONSUMER_DISPLAY_BACKLIGHT_TOGGLE)
#define C_BKLT_TOG (C_BACKLIGHT_TOGGLE)

/* Consumer Display Set Brightness to Minimum */
#define C_BRIGHTNESS_MINIMUM (HID_USAGE_CONSUMER_DISPLAY_SET_BRIGHTNESS_TO_MINIMUM)
#define C_BRI_MIN (C_BRIGHTNESS_MINIMUM)

/* Consumer Display Set Brightness to Maximum */
#define C_BRIGHTNESS_MAXIMUM (HID_USAGE_CONSUMER_DISPLAY_SET_BRIGHTNESS_TO_MAXIMUM)
#define C_BRI_MAX (C_BRIGHTNESS_MAXIMUM)

/* Consumer Display Set Auto Brightness */
#define C_BRIGHTNESS_AUTO (HID_USAGE_CONSUMER_DISPLAY_SET_AUTO_BRIGHTNESS)
#define C_BRI_AUTO (C_BRIGHTNESS_AUTO)

/* Consumer Mode Step */
#define C_MEDIA_STEP (HID_USAGE_CONSUMER_MODE_STEP)
#define C_MODE_STEP (C_MEDIA_STEP)

/* Consumer Recall Last */
#define C_RECALL_LAST (HID_USAGE_CONSUMER_RECALL_LAST)
#define C_CHAN_LAST (C_RECALL_LAST)

/* Consumer Media Select Computer */
#define C_MEDIA_COMPUTER (HID_USAGE_CONSUMER_MEDIA_SELECT_COMPUTER)

/* Consumer Media Select TV */
#define C_MEDIA_TV (HID_USAGE_CONSUMER_MEDIA_SELECT_TV)

/* Consumer Media Select WWW */
#define C_MEDIA_WWW (HID_USAGE_CONSUMER_MEDIA_SELECT_WWW)

/* Consumer Media Select DVD */
#define C_MEDIA_DVD (HID_USAGE_CONSUMER_MEDIA_SELECT_DVD)

/* Consumer Media Select Telephone */
#define C_MEDIA_PHONE (HID_USAGE_CONSUMER_MEDIA_SELECT_TELEPHONE)

/* Consumer Media Select Program Guide */
#define C_MEDIA_GUIDE (HID_USAGE_CONSUMER_MEDIA_SELECT_PROGRAM_GUIDE)

/* Consumer Media Select Video Phone */
#define C_MEDIA_VIDEOPHONE (HID_USAGE_CONSUMER_MEDIA_SELECT_VIDEO_PHONE)

/* Consumer Media Select Games */
#define C_MEDIA_GAMES (HID_USAGE_CONSUMER_MEDIA_SELECT_GAMES)

/* Consumer Media Select Messages */
#define C_MEDIA_MESSAGES (HID_USAGE_CONSUMER_MEDIA_SELECT_MESSAGES)

/* Consumer Media Select CD */
#define C_MEDIA_CD (HID_USAGE_CONSUMER_MEDIA_SELECT_CD)

/* Consumer Media Select VCR */
#define C_MEDIA_VCR (HID_USAGE_CONSUMER_MEDIA_SELECT_VCR)

/* Consumer Media Select Tuner */
#define C_MEDIA_TUNER (HID_USAGE_CONSUMER_MEDIA_SELECT_TUNER)

/* Consumer Quit */
#define C_QUIT (HID_USAGE_CONSUMER_QUIT)

/* Consumer Help */
#define C_HELP (HID_USAGE_CONSUMER_HELP)

/* Consumer Media Select Tape */
#define C_MEDIA_TAPE (HID_USAGE_CONSUMER_MEDIA_SELECT_TAPE)

/* Consumer Media Select Cable */
#define C_MEDIA_CABLE (HID_USAGE_CONSUMER_MEDIA_SELECT_CABLE)

/* Consumer Media Select Satellite */
#define C_MEDIA_SATELLITE (HID_USAGE_CONSUMER_MEDIA_SELECT_SATELLITE)

/* Consumer Media Select Home */
#define C_MEDIA_HOME (HID_USAGE_CONSUMER_MEDIA_SELECT_HOME)

/* Consumer Channel Increment */
#define C_CHANNEL_INC (HID_USAGE_CONSUMER_CHANNEL_INCREMENT)
#define C_CHAN_INC (C_CHANNEL_INC)

/* Consumer Channel Decrement */
#define C_CHANNEL_DEC (HID_USAGE_CONSUMER_CHANNEL_DECREMENT)
#define C_CHAN_DEC (C_CHANNEL_DEC)

/* Consumer VCR Plus */
#define C_MEDIA_VCR_PLUS (HID_USAGE_CONSUMER_VCR_PLUS)

/* Consumer Play */
#define C_PLAY (HID_USAGE_CONSUMER_PLAY)

/* Consumer Pause */
#define C_PAUSE (HID_USAGE_CONSUMER_PAUSE)

/* Consumer Record */
#define C_RECORD (HID_USAGE_CONSUMER_RECORD)
#define C_REC (C_RECORD)

/* Consumer Fast Forward */
#define C_FAST_FORWARD (HID_USAGE_CONSUMER_FAST_FORWARD)
#define C_FF (C_FAST_FORWARD)

/* Consumer Rewind */
#define C_REWIND (HID_USAGE_CONSUMER_REWIND)
#define C_RW (C_REWIND)

/* Consumer Scan Next Track */
#define C_NEXT (HID_USAGE_CONSUMER_SCAN_NEXT_TRACK)
#define M_NEXT (C_NEXT) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Scan Previous Track */
#define C_PREVIOUS (HID_USAGE_CONSUMER_SCAN_PREVIOUS_TRACK)
#define C_PREV (C_PREVIOUS)
#define M_PREV (C_PREVIOUS) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Stop */
#define C_STOP (HID_USAGE_CONSUMER_STOP)
#define M_STOP (C_STOP) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Eject */
#define C_EJECT (HID_USAGE_CONSUMER_EJECT)
#define M_EJCT (C_EJECT) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Random Play */
#define C_RANDOM_PLAY (HID_USAGE_CONSUMER_RANDOM_PLAY)
#define C_SHUFFLE (C_RANDOM_PLAY)

/* Consumer Repeat */
#define C_REPEAT (HID_USAGE_CONSUMER_REPEAT)

/* Consumer Slow Tracking */
#define C_SLOW_TRACKING (HID_USAGE_CONSUMER_SLOW_TRACKING)
#define C_SLOW2 (C_SLOW_TRACKING)

/* Consumer Stop/Eject */
#define C_STOP_EJECT (HID_USAGE_CONSUMER_STOP_EJECT)

/* Consumer Play/Pause */
#define C_PLAY_PAUSE (HID_USAGE_CONSUMER_PLAY_PAUSE)
#define C_PP (C_PLAY_PAUSE)
#define M_PLAY (C_PLAY_PAUSE) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Voice Command */
#define C_VOICE_COMMAND (HID_USAGE_CONSUMER_VOICE_COMMAND)

/* Consumer Mute */
#define C_MUTE (HID_USAGE_CONSUMER_MUTE)
#define M_MUTE (C_MUTE) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Bass Boost */
#define C_BASS_BOOST (HID_USAGE_CONSUMER_BASS_BOOST)

/* Consumer Volume Increment */
#define C_VOLUME_UP (HID_USAGE_CONSUMER_VOLUME_INCREMENT)
#define C_VOL_UP (C_VOLUME_UP)
#define M_VOLU (C_VOLUME_UP) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Volume Decrement */
#define C_VOLUME_DOWN (HID_USAGE_CONSUMER_VOLUME_DECREMENT)
#define C_VOL_DN (C_VOLUME_DOWN)
#define M_VOLD (C_VOLUME_DOWN) // WARNING: DEPRECATED (DO NOT USE)

/* Consumer Slow */
#define C_SLOW (HID_USAGE_CONSUMER_SLOW)

/* Consumer Alternate Audio Increment */
#define C_ALTERNATE_AUDIO_INCREMENT (HID_USAGE_CONSUMER_ALTERNATE_AUDIO_INCREMENT)
#define C_ALT_AUDIO_INC (C_ALTERNATE_AUDIO_INCREMENT)

/* Consumer AL Consumer Control Configuration */
#define C_AL_CCC (HID_USAGE_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION)

/* Consumer AL Word Processor */
#define C_AL_WORD (HID_USAGE_CONSUMER_AL_WORD_PROCESSOR)

/* Consumer AL Text Editor */
#define C_AL_TEXT_EDITOR (HID_USAGE_CONSUMER_AL_TEXT_EDITOR)

/* Consumer AL Spreadsheet */
#define C_AL_SPREADSHEET (HID_USAGE_CONSUMER_AL_SPREADSHEET)
#define C_AL_SHEET (C_AL_SPREADSHEET)

/* Consumer AL Graphics Editor */
#define C_AL_GRAPHICS_EDITOR (HID_USAGE_CONSUMER_AL_GRAPHICS_EDITOR)

/* Consumer AL Presentation App */
#define C_AL_PRESENTATION (HID_USAGE_CONSUMER_AL_PRESENTATION_APP)

/* Consumer AL Database App */
#define C_AL_DATABASE (HID_USAGE_CONSUMER_AL_DATABASE_APP)
#define C_AL_DB (C_AL_DATABASE)

/* Consumer AL Email Reader */
#define C_AL_EMAIL (HID_USAGE_CONSUMER_AL_EMAIL_READER)
#define C_AL_MAIL (C_AL_EMAIL)

/* Consumer AL Newsreader */
#define C_AL_NEWS (HID_USAGE_CONSUMER_AL_NEWSREADER)

/* Consumer AL Voicemail */
#define C_AL_VOICEMAIL (HID_USAGE_CONSUMER_AL_VOICEMAIL)

/* Consumer AL Contacts/Address Book */
#define C_AL_CONTACTS (HID_USAGE_CONSUMER_AL_CONTACTS_ADDRESS_BOOK)
#define C_AL_ADDRESS_BOOK (C_AL_CONTACTS)

/* Consumer AL Calendar/Schedule */
#define C_AL_CALENDAR (HID_USAGE_CONSUMER_AL_CALENDAR_SCHEDULE)
#define C_AL_CAL (C_AL_CALENDAR)

/* Consumer AL Task/Project Manager */
#define C_AL_TASK_MANAGER (HID_USAGE_CONSUMER_AL_TASK_PROJECT_MANAGER)

/* Consumer AL Log/Journal/Timecard */
#define C_AL_JOURNAL (HID_USAGE_CONSUMER_AL_LOG_JOURNAL_TIMECARD)

/* Consumer AL Checkbook/Finance */
#define C_AL_FINANCE (HID_USAGE_CONSUMER_AL_CHECKBOOK_FINANCE)

/* Consumer AL Calculator */
#define C_AL_CALCULATOR (HID_USAGE_CONSUMER_AL_CALCULATOR)
#define C_AL_CALC (C_AL_CALCULATOR)

/* Consumer AL A/V Capture/Playback */
#define C_AL_AV_CAPTURE_PLAYBACK (HID_USAGE_CONSUMER_AL_A_V_CAPTURE_PLAYBACK)

/* Consumer AL Local Machine Browser */
#define C_AL_MY_COMPUTER (HID_USAGE_CONSUMER_AL_LOCAL_MACHINE_BROWSER)

/* Consumer AL Internet Browser */
#define C_AL_WWW (HID_USAGE_CONSUMER_AL_INTERNET_BROWSER)

/* Consumer AL Network Chat */
#define C_AL_NETWORK_CHAT (HID_USAGE_CONSUMER_AL_NETWORK_CHAT)
#define C_AL_CHAT (C_AL_NETWORK_CHAT)

/* Consumer AL Logoff */
#define C_AL_LOGOFF (HID_USAGE_CONSUMER_AL_LOGOFF)

/* Consumer AL Terminal Lock/Screensaver */
#define C_AL_LOCK (HID_USAGE_CONSUMER_AL_TERMINAL_LOCK_SCREENSAVER)
#define C_AL_SCREENSAVER (C_AL_LOCK)
#define C_AL_COFFEE (C_AL_LOCK)

/* Consumer AL Control Panel */
#define C_AL_CONTROL_PANEL (HID_USAGE_CONSUMER_AL_CONTROL_PANEL)

/* Consumer AL Select Task/Application */
#define C_AL_SELECT_TASK (HID_USAGE_CONSUMER_AL_SELECT_TASK_APPLICATION)

/* Consumer AL Next Task/Application */
#define C_AL_NEXT_TASK (HID_USAGE_CONSUMER_AL_NEXT_TASK_APPLICATION)

/* Consumer AL Previous Task/Application */
#define C_AL_PREVIOUS_TASK (HID_USAGE_CONSUMER_AL_PREVIOUS_TASK_APPLICATION)
#define C_AL_PREV_TASK (C_AL_PREVIOUS_TASK)

/* Consumer AL Integrated Help Center */
#define C_AL_HELP (HID_USAGE_CONSUMER_AL_INTEGRATED_HELP_CENTER)

/* Consumer AL Documents */
#define C_AL_DOCUMENTS (HID_USAGE_CONSUMER_AL_DOCUMENTS)
#define C_AL_DOCS (C_AL_DOCUMENTS)

/* Consumer AL Spell Check */
#define C_AL_SPELLCHECK (HID_USAGE_CONSUMER_AL_SPELL_CHECK)
#define C_AL_SPELL (C_AL_SPELLCHECK)

/* Consumer AL Keyboard Layout */
#define C_AL_KEYBOARD_LAYOUT (HID_USAGE_CONSUMER_AL_KEYBOARD_LAYOUT)

/* Consumer AL Screen Saver */
#define C_AL_SCREEN_SAVER (HID_USAGE_CONSUMER_AL_SCREEN_SAVER)

/* Consumer AL File Browser */
#define C_AL_FILE_BROWSER (HID_USAGE_CONSUMER_AL_FILE_BROWSER)
#define C_AL_FILES (C_AL_FILE_BROWSER)

/* Consumer AL Image Browser */
#define C_AL_IMAGE_BROWSER (HID_USAGE_CONSUMER_AL_IMAGE_BROWSER)
#define C_AL_IMAGES (C_AL_IMAGE_BROWSER)

/* Consumer AL Audio Browser */
#define C_AL_AUDIO_BROWSER (HID_USAGE_CONSUMER_AL_AUDIO_BROWSER)
#define C_AL_AUDIO (C_AL_AUDIO_BROWSER)
#define C_AL_MUSIC (C_AL_AUDIO_BROWSER)

/* Consumer AL Movie Browser */
#define C_AL_MOVIE_BROWSER (HID_USAGE_CONSUMER_AL_MOVIE_BROWSER)
#define C_AL_MOVIES (C_AL_MOVIE_BROWSER)

/* Consumer AL Instant Messaging */
#define C_AL_INSTANT_MESSAGING (HID_USAGE_CONSUMER_AL_INSTANT_MESSAGING)
#define C_AL_IM (C_AL_INSTANT_MESSAGING)

/* Consumer AL OEM Features/Tips/Tutorial Browser */
#define C_AL_OEM_FEATURES (HID_USAGE_CONSUMER_AL_OEM_FEATURES_TIPS_TUTORIAL_BROWSER)
#define C_AL_TIPS (C_AL_OEM_FEATURES)
#define C_AL_TUTORIAL (C_AL_OEM_FEATURES)

/* Consumer AC New */
#define C_AC_NEW (HID_USAGE_CONSUMER_AC_NEW)

/* Consumer AC Open */
#define C_AC_OPEN (HID_USAGE_CONSUMER_AC_OPEN)

/* Consumer AC Close */
#define C_AC_CLOSE (HID_USAGE_CONSUMER_AC_CLOSE)

/* Consumer AC Exit */
#define C_AC_EXIT (HID_USAGE_CONSUMER_AC_EXIT)

/* Consumer AC Save */
#define C_AC_SAVE (HID_USAGE_CONSUMER_AC_SAVE)

/* Consumer AC Print */
#define C_AC_PRINT (HID_USAGE_CONSUMER_AC_PRINT)

/* Consumer AC Properties */
#define C_AC_PROPERTIES (HID_USAGE_CONSUMER_AC_PROPERTIES)
#define C_AC_PROPS (C_AC_PROPERTIES)

/* Consumer AC Undo */
#define C_AC_UNDO (HID_USAGE_CONSUMER_AC_UNDO)

/* Consumer AC Copy */
#define C_AC_COPY (HID_USAGE_CONSUMER_AC_COPY)

/* Consumer AC Cut */
#define C_AC_CUT (HID_USAGE_CONSUMER_AC_CUT)

/* Consumer AC Paste */
#define C_AC_PASTE (HID_USAGE_CONSUMER_AC_PASTE)

/* Consumer AC Find */
#define C_AC_FIND (HID_USAGE_CONSUMER_AC_FIND)

/* Consumer AC Search */
#define C_AC_SEARCH (HID_USAGE_CONSUMER_AC_SEARCH)

/* Consumer AC Go To */
#define C_AC_GOTO (HID_USAGE_CONSUMER_AC_GO_TO)

/* Consumer AC Home */
#define C_AC_HOME (HID_USAGE_CONSUMER_AC_HOME)

/* Consumer AC Back */
#define C_AC_BACK (HID_USAGE_CONSUMER_AC_BACK)

/* Consumer AC Forward */
#define C_AC_FORWARD (HID_USAGE_CONSUMER_AC_FORWARD)

/* Consumer AC Stop */
#define C_AC_STOP (HID_USAGE_CONSUMER_AC_STOP)

/* Consumer AC Refresh */
#define C_AC_REFRESH (HID_USAGE_CONSUMER_AC_REFRESH)

/* Consumer AC Bookmarks */
#define C_AC_BOOKMARKS (HID_USAGE_CONSUMER_AC_BOOKMARKS)
#define C_AC_FAVORITES (C_AC_BOOKMARKS)
#define C_AC_FAVOURITES (C_AC_BOOKMARKS)

/* Consumer AC Zoom In */
#define C_AC_ZOOM_IN (HID_USAGE_CONSUMER_AC_ZOOM_IN)

/* Consumer AC Zoom Out */
#define C_AC_ZOOM_OUT (HID_USAGE_CONSUMER_AC_ZOOM_OUT)

/* Consumer AC Zoom */
#define C_AC_ZOOM (HID_USAGE_CONSUMER_AC_ZOOM)

/* Consumer AC View Toggle */
#define C_AC_VIEW_TOGGLE (HID_USAGE_CONSUMER_AC_VIEW_TOGGLE)

/* Consumer AC Scroll Up */
#define C_AC_SCROLL_UP (HID_USAGE_CONSUMER_AC_SCROLL_UP)

/* Consumer AC Scroll Down */
#define C_AC_SCROLL_DOWN (HID_USAGE_CONSUMER_AC_SCROLL_DOWN)

/* Consumer AC Edit */
#define C_AC_EDIT (HID_USAGE_CONSUMER_AC_EDIT)

/* Consumer AC Cancel */
#define C_AC_CANCEL (HID_USAGE_CONSUMER_AC_CANCEL)

/* Consumer AC Insert Mode */
#define C_AC_INSERT (HID_USAGE_CONSUMER_AC_INSERT_MODE)
#define C_AC_INS (C_AC_INSERT)

/* Consumer AC Delete */
#define C_AC_DEL (HID_USAGE_CONSUMER_AC_DELETE)

/* Consumer AC Redo/Repeat */
#define C_AC_REDO (HID_USAGE_CONSUMER_AC_REDO_REPEAT)

/* Consumer AC Reply */
#define C_AC_REPLY (HID_USAGE_CONSUMER_AC_REPLY)

/* Consumer AC Forward Msg */
#define C_AC_FORWARD_MAIL (HID_USAGE_CONSUMER_AC_FORWARD_MSG)

/* Consumer AC Send */
#define C_AC_SEND (HID_USAGE_CONSUMER_AC_SEND)

/* Consumer AC Desktop Show All Windows */
#define C_AC_DESKTOP_SHOW_ALL_WINDOWS (HID_USAGE_CONSUMER_AC_DESKTOP_SHOW_ALL_WINDOWS)

/* Consumer Keyboard Input Assist Previous */
#define C_KEYBOARD_INPUT_ASSIST_PREVIOUS (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_PREVIOUS)
#define C_KBIA_PREV (C_KEYBOARD_INPUT_ASSIST_PREVIOUS)

/* Consumer Keyboard Input Assist Next */
#define C_KEYBOARD_INPUT_ASSIST_NEXT (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_NEXT)
#define C_KBIA_NEXT (C_KEYBOARD_INPUT_ASSIST_NEXT)

/* Consumer Keyboard Input Assist Previous Group */
#define C_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP                                                     \
    (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP)
#define C_KBIA_PREV_GRP (C_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP)

/* Consumer Keyboard Input Assist Next Group */
#define C_KEYBOARD_INPUT_ASSIST_NEXT_GROUP (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_NEXT_GROUP)
#define C_KBIA_NEXT_GRP (C_KEYBOARD_INPUT_ASSIST_NEXT_GROUP)

/* Consumer Keyboard Input Assist Accept */
#define C_KEYBOARD_INPUT_ASSIST_ACCEPT (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_ACCEPT)
#define C_KBIA_ACCEPT (C_KEYBOARD_INPUT_ASSIST_ACCEPT)

/* Consumer Keyboard Input Assist Cancel */
#define C_KEYBOARD_INPUT_ASSIST_CANCEL (HID_USAGE_CONSUMER_KEYBOARD_INPUT_ASSIST_CANCEL)
#define C_KBIA_CANCEL (C_KEYBOARD_INPUT_ASSIST_CANCEL)

#define MOD_LCTL 0x01
#define MOD_LSFT 0x02
#define MOD_LALT 0x04
#define MOD_LGUI 0x08
#define MOD_RCTL 0x10
#define MOD_RSFT 0x20
#define MOD_RALT 0x40
#define MOD_RGUI 0x80

#define SELECT_MODS(keycode) (keycode >> 24)
#define STRIP_MODS(keycode) (keycode & ~(0xFF << 24))

#define APPLY_MODS(mods, keycode) (mods << 24 | keycode)
#define LC(keycode) APPLY_MODS(MOD_LCTL, keycode)
#define LS(keycode) APPLY_MODS(MOD_LSFT, keycode)
#define LA(keycode) APPLY_MODS(MOD_LALT, keycode)
#define LG(keycode) APPLY_MODS(MOD_LGUI, keycode)
//RC interferes with row-column macro from marrix-transform.h
#define RC(keycode) APPLY_MODS(MOD_RCTL, keycode)
#define RS(keycode) APPLY_MODS(MOD_RSFT, keycode)
#define RA(keycode) APPLY_MODS(MOD_RALT, keycode)
#define RG(keycode) APPLY_MODS(MOD_RGUI, keycode)
