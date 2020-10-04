/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/hid_usage_legacy.h>
#include <zmk/hid_usage.h>

#include <dt-bindings/zmk/keys_legacy.h>

/* System Power Down */
#define SYSTEM_POWER (HID_USAGE_GD_SYSTEM_POWER_DOWN)
#define SYS_POWER (SYSTEM_POWER)
#define SYS_PWR (SYSTEM_POWER)

/* System Sleep */
#define SYSTEM_SLEEP (HID_USAGE_GD_SYSTEM_SLEEP)
#define SYS_SLEEP (SYSTEM_SLEEP)

/* System Wake Up */
#define SYSTEM_WAKE_UP (HID_USAGE_GD_SYSTEM_WAKE_UP)
#define SYS_WAKE_UP (SYSTEM_WAKE_UP)
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
#define NUM_1 (NUMBER_1)
#define NUM1 (NUMBER_1)
#define N1 (NUMBER_1)
#define KB1 (NUMBER_1)

/* Keyboard 2 and @ (At sign) */
#define NUMBER_2 (HID_USAGE_KEY_KEYBOARD_2_AND_AT)
#define NUM_2 (NUMBER_2)
#define NUM2 (NUMBER_2)
#define N2 (NUMBER_2)
#define KB2 (NUMBER_2)

/* Keyboard 3 and # (Hash/Number) */
#define NUMBER_3 (HID_USAGE_KEY_KEYBOARD_3_AND_HASH)
#define NUM_3 (NUMBER_3)
#define NUM3 (NUMBER_3)
#define N3 (NUMBER_3)
#define KB3 (NUMBER_3)

/* Keyboard 4 and $ (Dollar) */
#define NUMBER_4 (HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)
#define NUM_4 (NUMBER_4)
#define NUM4 (NUMBER_4)
#define N4 (NUMBER_4)
#define KB4 (NUMBER_4)

/* Keyboard 5 and % (Percent) */
#define NUMBER_5 (HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)
#define NUM_5 (NUMBER_5)
#define NUM5 (NUMBER_5)
#define N5 (NUMBER_5)
#define KB5 (NUMBER_5)

/* Keyboard 6 and ^ (Caret) */
#define NUMBER_6 (HID_USAGE_KEY_KEYBOARD_6_AND_CARET)
#define NUM_6 (NUMBER_6)
#define NUM6 (NUMBER_6)
#define N6 (NUMBER_6)
#define KB6 (NUMBER_6)

/* Keyboard 7 and & (Ampersand) */
#define NUMBER_7 (HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)
#define NUM_7 (NUMBER_7)
#define NUM7 (NUMBER_7)
#define N7 (NUMBER_7)
#define KB7 (NUMBER_7)

/* Keyboard 8 and * (Asterisk) */
#define NUMBER_8 (HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)
#define NUM_8 (NUMBER_8)
#define NUM8 (NUMBER_8)
#define N8 (NUMBER_8)
#define KB8 (NUMBER_8)

/* Keyboard 9 and (Left Parenthesis) */
#define NUMBER_9 (HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)
#define NUM_9 (NUMBER_9)
#define NUM9 (NUMBER_9)
#define N9 (NUMBER_9)
#define KB9 (NUMBER_9)

/* Keyboard 0 and ) (Right Parenthesis) */
#define NUMBER_0 (HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)
#define NUM_0 (NUMBER_0)
#define NUM0 (NUMBER_0)
#define N0 (NUMBER_0)
#define KB0 (NUMBER_0)

/* Keyboard Return (Enter) */
#define ENTER (HID_USAGE_KEY_KEYBOARD_RETURN_ENTER)
#define ENT (ENTER)
#define RETURN (ENTER)
#define RET (ENTER)

/* Keyboard Escape */
#define ESCAPE (HID_USAGE_KEY_KEYBOARD_ESCAPE)
#define ESC (ESCAPE)

/* Keyboard Backspace */
#define BACKSPACE (HID_USAGE_KEY_KEYBOARD_DELETE_BACKSPACE)
#define BKSP (BACKSPACE)
#define BSPACE (BACKSPACE)
#define BSPC (BACKSPACE)

/* Keyboard Tab */
#define TAB (HID_USAGE_KEY_KEYBOARD_TAB)

/* Keyboard Space */
#define SPACEBAR (HID_USAGE_KEY_KEYBOARD_SPACEBAR)
#define SPACE (SPACEBAR)
#define SPC (SPACEBAR)

/* Keyboard - and _ (Minus and Underscore) */
#define MINUS (HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)
#define MNS (MINUS)

/* Keyboard = and + (Equal and Plus) */
#define EQUAL (HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)
#define EQUALS (EQUAL)
#define EQL (EQUAL)

/* Keyboard [ and { (Left Bracket and Left Brace) */
#define LEFT_BRACKET (HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)
#define LBRACKET (LEFT_BRACKET)
#define LBKT (LEFT_BRACKET)
#define LBK (LEFT_BRACKET)

/* Keyboard ] and } (Right Bracket and Right Brace) */
#define RIGHT_BRACKET (HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)
#define RBRACKET (RIGHT_BRACKET)
#define RBKT (RIGHT_BRACKET)
#define RBK (RIGHT_BRACKET)

/* Keyboard \ and | (Backslash and Pipe) */
#define BACKSLASH (HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)
#define BSLASH (BACKSLASH)
#define BSLSH (BACKSLASH)
#define BSLH (BACKSLASH)

/* Keyboard Non-US # and ~ (Non-US Hash/Number and Tilde) */
#define NON_US_HASH (HID_USAGE_KEY_KEYBOARD_NON_US_HASH_AND_TILDE)

/* Keyboard ; and : (Semicolon and Colon) */
#define SEMICOLON (HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)
#define SCOLON (SEMICOLON)
#define SCLN (SEMICOLON)

/* Keyboard ' and " (Apostrophe and Quote) */
#define APOSTROPHE (HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)
#define QUOTE (APOSTROPHE)
#define QT (APOSTROPHE)

/* Keyboard ` and ~ (Grave Accent and Tilde) */
#define GRAVE (HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)
#define GRV (GRAVE)

/* Keyboard , and < (Comma and Less Than) */
#define COMMA (HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)
#define COMM (COMMA)
#define CMMA (COMMA)

/* Keyboard . and > (Period and Greater Than) */
#define DOT (HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)
#define PERIOD (DOT)

/* Keyboard / and ? (Forward Slash and Question) */
#define SLASH (HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)
#define SLSH (SLASH)
#define SLH (SLASH)
#define FSLASH (SLASH)
#define FSLSH (SLASH)
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
#define PSCREEN (PRINTSCREEN)
#define PRSC (PRINTSCREEN)

/* Keyboard Scroll Lock */
#define SCROLLLOCK (HID_USAGE_KEY_KEYBOARD_SCROLL_LOCK)
#define SCROLL (SCROLLLOCK)
#define SLCK (SCROLLLOCK)

/* Keyboard Pause/Break */
#define PAUSE (HID_USAGE_KEY_KEYBOARD_PAUSE)

/* Keyboard Insert */
#define INSERT (HID_USAGE_KEY_KEYBOARD_INSERT)
#define INS (INSERT)

/* Keyboard Home */
#define HOME (HID_USAGE_KEY_KEYBOARD_HOME)

/* Keyboard Page Up */
#define PAGE_UP (HID_USAGE_KEY_KEYBOARD_PAGEUP)
#define PAGEUP (PAGE_UP)
#define PGUP (PAGE_UP)

/* Keyboard Delete */
#define DELETE (HID_USAGE_KEY_KEYBOARD_DELETE_FORWARD)
#define DEL (DELETE)

/* Keyboard End */
#define END (HID_USAGE_KEY_KEYBOARD_END)

/* Keyboard Page Down */
#define PAGE_DOWN (HID_USAGE_KEY_KEYBOARD_PAGEDOWN)
#define PAGEDN (PAGE_DOWN)
#define PGDN (PAGE_DOWN)

/* Keyboard Right Arrow */
#define RIGHT_ARROW (HID_USAGE_KEY_KEYBOARD_RIGHTARROW)
#define RIGHT (RIGHT_ARROW)

/* Keyboard Left Arrow */
#define LEFT_ARROW (HID_USAGE_KEY_KEYBOARD_LEFTARROW)
#define LEFT (LEFT_ARROW)

/* Keyboard Down Arrow */
#define DOWN_ARROW (HID_USAGE_KEY_KEYBOARD_DOWNARROW)
#define DOWN (DOWN_ARROW)

/* Keyboard Up Arrow */
#define UP_ARROW (HID_USAGE_KEY_KEYBOARD_UPARROW)
#define UP (UP_ARROW)

/* Keypad Numlock and Clear */
#define KP_NUMLOCK (HID_USAGE_KEY_KEYPAD_NUM_LOCK_AND_CLEAR)
#define KP_NLCK (KP_NUMLOCK)

/* Keypad / (Slash/Divide) */
#define KP_SLASH (HID_USAGE_KEY_KEYPAD_SLASH)
#define KP_DIVIDE (KP_SLASH)
#define KP_DIV (KP_SLASH)

/* Keypad * (Multiply) */
#define KP_MULTIPLY (HID_USAGE_KEY_KEYPAD_ASTERISK)
#define KP_MLT (KP_MULTIPLY)

/* Keypad - (Minus) */
#define KP_MINUS (HID_USAGE_KEY_KEYPAD_MINUS)
#define KP_MIN (KP_MINUS)

/* Keypad + (Plus) */
#define KP_PLUS (HID_USAGE_KEY_KEYPAD_PLUS)
#define KP_PLS (KP_PLUS)

/* Keypad Enter */
#define KP_ENTER (HID_USAGE_KEY_KEYPAD_ENTER)
#define KP_ENT (KP_ENTER)

/* Keypad 1 */
#define KP_NUMBER_1 (HID_USAGE_KEY_KEYPAD_1_AND_END)
#define KP_NUM_1 (KP_NUMBER_1)
#define KP_NUM1 (KP_NUMBER_1)
#define KP_N1 (KP_NUMBER_1)
#define KP1 (KP_NUMBER_1)

/* Keypad 2 */
#define KP_NUMBER_2 (HID_USAGE_KEY_KEYPAD_2_AND_DOWN_ARROW)
#define KP_NUM_2 (KP_NUMBER_2)
#define KP_NUM2 (KP_NUMBER_2)
#define KP_N2 (KP_NUMBER_2)
#define KP2 (KP_NUMBER_2)

/* Keypad 3 */
#define KP_NUMBER_3 (HID_USAGE_KEY_KEYPAD_3_AND_PAGEDN)
#define KP_NUM_3 (KP_NUMBER_3)
#define KP_NUM3 (KP_NUMBER_3)
#define KP_N3 (KP_NUMBER_3)
#define KP3 (KP_NUMBER_3)

/* Keypad 4 */
#define KP_NUMBER_4 (HID_USAGE_KEY_KEYPAD_4_AND_LEFT_ARROW)
#define KP_NUM_4 (KP_NUMBER_4)
#define KP_NUM4 (KP_NUMBER_4)
#define KP_N4 (KP_NUMBER_4)
#define KP4 (KP_NUMBER_4)

/* Keypad 5 */
#define KP_NUMBER_5 (HID_USAGE_KEY_KEYPAD_5)
#define KP_NUM_5 (KP_NUMBER_5)
#define KP_NUM5 (KP_NUMBER_5)
#define KP_N5 (KP_NUMBER_5)
#define KP5 (KP_NUMBER_5)

/* Keypad 6 */
#define KP_NUMBER_6 (HID_USAGE_KEY_KEYPAD_6_AND_RIGHT_ARROW)
#define KP_NUM_6 (KP_NUMBER_6)
#define KP_NUM6 (KP_NUMBER_6)
#define KP_N6 (KP_NUMBER_6)
#define KP6 (KP_NUMBER_6)

/* Keypad 7 */
#define KP_NUMBER_7 (HID_USAGE_KEY_KEYPAD_7_AND_HOME)
#define KP_NUM_7 (KP_NUMBER_7)
#define KP_NUM7 (KP_NUMBER_7)
#define KP_N7 (KP_NUMBER_7)
#define KP7 (KP_NUMBER_7)

/* Keypad 8 */
#define KP_NUMBER_8 (HID_USAGE_KEY_KEYPAD_8_AND_UP_ARROW)
#define KP_NUM_8 (KP_NUMBER_8)
#define KP_NUM8 (KP_NUMBER_8)
#define KP_N8 (KP_NUMBER_8)
#define KP8 (KP_NUMBER_8)

/* Keypad 9 */
#define KP_NUMBER_9 (HID_USAGE_KEY_KEYPAD_9_AND_PAGEUP)
#define KP_NUM_9 (KP_NUMBER_9)
#define KP_NUM9 (KP_NUMBER_9)
#define KP_N9 (KP_NUMBER_9)
#define KP9 (KP_NUMBER_9)

/* Keypad 0 */
#define KP_NUMBER_0 (HID_USAGE_KEY_KEYPAD_0_AND_INSERT)
#define KP_NUM_0 (KP_NUMBER_0)
#define KP_NUM0 (KP_NUMBER_0)
#define KP_N0 (KP_NUMBER_0)
#define KP0 (KP_NUMBER_0)

/* Keypad . (Dot) */
#define KP_DOT (HID_USAGE_KEY_KEYPAD_PERIOD_AND_DELETE)

/* Keyboard Non-US \ and | (Non-us Backslash and Pipe) */
#define NON_US_BACKSLASH (HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)
#define NON_US_BSLASH (NON_US_BACKSLASH)
#define NON_US_BSLSH (NON_US_BACKSLASH)
#define NON_US_BSLH (NON_US_BACKSLASH)

/* Keyboard GUI (Windows/Command/Meta) */
#define GUI (HID_USAGE_KEY_KEYBOARD_APPLICATION)
#define WIN (GUI)
#define COMMAND (GUI)
#define META (GUI)

/* Keyboard Power */
#define POWER (HID_USAGE_KEY_KEYBOARD_POWER)
#define PWR (POWER)

/* Keypad = (Equal) */
#define KP_EQUALS (HID_USAGE_KEY_KEYPAD_EQUAL)
#define KP_EQUAL (KP_EQUALS)

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
#define EXECUTE (HID_USAGE_KEY_KEYBOARD_EXECUTE)
#define EXEC (EXECUTE)

/* Keyboard Help */
#define HELP (HID_USAGE_KEY_KEYBOARD_HELP)

/* Keyboard Menu */
#define MENU (HID_USAGE_KEY_KEYBOARD_MENU)

/* Keyboard Select */
#define SELECT (HID_USAGE_KEY_KEYBOARD_SELECT)

/* Keyboard Stop */
#define STOP (HID_USAGE_KEY_KEYBOARD_STOP)

/* Keyboard Again */
#define AGAIN (HID_USAGE_KEY_KEYBOARD_AGAIN)
#define REDO (AGAIN)

/* Keyboard Undo */
#define UNDO (HID_USAGE_KEY_KEYBOARD_UNDO)

/* Keyboard Cut */
#define CUT (HID_USAGE_KEY_KEYBOARD_CUT)

/* Keyboard Copy */
#define COPY (HID_USAGE_KEY_KEYBOARD_COPY)

/* Keyboard Paste */
#define PASTE (HID_USAGE_KEY_KEYBOARD_PASTE)
#define PSTE (PASTE)

/* Keyboard Find */
#define FIND (HID_USAGE_KEY_KEYBOARD_FIND)

/* Keyboard Mute */
#define MUTE (HID_USAGE_KEY_KEYBOARD_MUTE)

/* Keyboard Volume Up */
#define VOLUME_UP (HID_USAGE_KEY_KEYBOARD_VOLUME_UP)
#define VOLUP (VOLUME_UP)
#define VOLU (VOLUME_UP)

/* Keyboard Volume Down */
#define VOLUME_DOWN (HID_USAGE_KEY_KEYBOARD_VOLUME_DOWN)
#define VOLUMEDN (VOLUME_DOWN)
#define VOLDOWN (VOLUME_DOWN)
#define VOLDN (VOLUME_DOWN)
#define VOLD (VOLUME_DOWN)

/* Keyboard Locking Caps Lock */
#define LOCKING_CAPS (HID_USAGE_KEY_KEYBOARD_LOCKING_CAPS_LOCK)
#define LCAPS (LOCKING_CAPS)

/* Keyboard Locking Num Lock */
#define LOCKING_NUM (HID_USAGE_KEY_KEYBOARD_LOCKING_NUM_LOCK)
#define LNUM (LOCKING_NUM)

/* Keyboard Locking Scroll Lock */
#define LOCKING_SCROLL (HID_USAGE_KEY_KEYBOARD_LOCKING_SCROLL_LOCK)
#define LSCROLL (LOCKING_SCROLL)

/* Keypad , (Comma) */
#define KP_COMMA (HID_USAGE_KEY_KEYPAD_COMMA)

/* Keyboard International 1 */
#define INT1 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL1)
#define INT_RO (INT1)

/* Keyboard International 2 */
#define INT2 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL2)
#define INT_KANA (INT2)

/* Keyboard International 3 */
#define INT3 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL3)
#define INT_YEN (INT3)

/* Keyboard International 4 */
#define INT4 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL4)
#define INT_HENKAN (INT4)
#define INT_HENK (INT4)

/* Keyboard International 5 */
#define INT5 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL5)
#define INT_MUHENKAN (INT5)
#define INT_MHEN (INT5)

/* Keyboard International 6 */
#define INT6 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL6)

/* Keyboard International 7 */
#define INT7 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL7)

/* Keyboard International 8 */
#define INT8 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL8)

/* Keyboard International 9 */
#define INT9 (HID_USAGE_KEY_KEYBOARD_INTERNATIONAL9)

/* Keyboard Language 1 */
#define LANG1 (HID_USAGE_KEY_KEYBOARD_LANG1)
#define LANG_HANGEUL (LANG1)

/* Keyboard Language 2 */
#define LANG2 (HID_USAGE_KEY_KEYBOARD_LANG2)
#define LANG_HANJA (LANG2)

/* Keyboard Language 3 */
#define LANG3 (HID_USAGE_KEY_KEYBOARD_LANG3)
#define LANG_KATAKANA (LANG3)

/* Keyboard Language 4 */
#define LANG4 (HID_USAGE_KEY_KEYBOARD_LANG4)
#define LANG_HIRAGANA (LANG4)

/* Keyboard Language 5 */
#define LANG5 (HID_USAGE_KEY_KEYBOARD_LANG5)

/* Keyboard Language 6 */
#define LANG6 (HID_USAGE_KEY_KEYBOARD_LANG6)

/* Keyboard Language 7 */
#define LANG7 (HID_USAGE_KEY_KEYBOARD_LANG7)

/* Keyboard Language 8 */
#define LANG8 (HID_USAGE_KEY_KEYBOARD_LANG8)

/* Keyboard Language 9 */
#define LANG9 (HID_USAGE_KEY_KEYBOARD_LANG9)

/* Keyboard Alternate Erase */
#define ALT_ERASE (HID_USAGE_KEY_KEYBOARD_ALTERNATE_ERASE)

/* Keyboard SysReq/Attention */
#define SYSREQ (HID_USAGE_KEY_KEYBOARD_SYSREQ_ATTENTION)
#define ATTENTION (SYSREQ)

/* Keyboard Cancel */
#define CANCEL (HID_USAGE_KEY_KEYBOARD_CANCEL)

/* Keyboard Clear */
#define CLEAR (HID_USAGE_KEY_KEYBOARD_CLEAR)
#define CLR (CLEAR)

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
#define CURU (HID_USAGE_KEY_CURRENCY_UNIT)

/* Keypad ( (Left Parenthesis) */
#define KP_LEFT_PARENTHESIS (HID_USAGE_KEY_KEYPAD_LEFT_PARENTHESIS)
#define KP_LEFT_PAREN (KP_LEFT_PARENTHESIS)
#define KP_LPRN (KP_LEFT_PARENTHESIS)

/* Keypad ) (Right Parenthesis) */
#define KP_RIGHT_PARENTHESIS (HID_USAGE_KEY_KEYPAD_RIGHT_PARENTHESIS)
#define KP_RIGHT_PAREN (KP_RIGHT_PARENTHESIS)
#define KP_RPRN (KP_RIGHT_PARENTHESIS)

/* Keypad { (Left Brace) */
#define KP_LEFT_BRACE (HID_USAGE_KEY_KEYPAD_LEFT_BRACE)
#define KP_LBRACE (KP_LEFT_BRACE)
#define KP_LBC (KP_LEFT_BRACE)

/* Keypad } (Right Brace) */
#define KP_RIGHT_BRACE (HID_USAGE_KEY_KEYPAD_RIGHT_BRACE)
#define KP_RBRACE (KP_RIGHT_BRACE)
#define KP_RBC (KP_RIGHT_BRACE)

/* Keypad ^ (Caret) */
#define KP_CARET (HID_USAGE_KEY_KEYPAD_CARET)
#define KP_CRT (KP_CARET)

/* Keypad % (Percent) */
#define KP_PERCENT (HID_USAGE_KEY_KEYPAD_PERCENT)
#define KP_PRCT (KP_PERCENT)

/* Keypad > (Greater Than) */
#define KP_GREATER_THAN (HID_USAGE_KEY_KEYPAD_LESS_THAN)
#define KP_GT (KP_GREATER_THAN)

/* Keypad < (Less Than) */
#define KP_LESS_THAN (HID_USAGE_KEY_KEYPAD_GREATER_THAN)
#define KP_LT (KP_LESS_THAN)

/* Keypad & (Ampersand) */
#define KP_AMPERSAND (HID_USAGE_KEY_KEYPAD_AMPERSAND)
#define KP_AMPS (KP_AMPERSAND)

/* Keypad | (Pipe) */
#define KP_PIPE (HID_USAGE_KEY_KEYPAD_PIPE)

/* Keypad : (Colon) */
#define KP_COLON (HID_USAGE_KEY_KEYPAD_COLON)

/* Keypad # (Hash/Number) */
#define KP_HASH (HID_USAGE_KEY_KEYPAD_HASH)

/* Keypad Space */
#define KP_SPACE (HID_USAGE_KEY_KEYPAD_SPACE)
#define KP_SPC (KP_SPACE)

/* Keypad @ (At Sign) */
#define KP_AT (HID_USAGE_KEY_KEYPAD_AT)

/* Keypad ! (Exclamation) */
#define KP_EXCLAMATION (HID_USAGE_KEY_KEYPAD_EXCLAMATION)
#define KP_BANG (KP_EXCLAMATION)

/* Keyboard Left Control */
#define LEFT_CONTROL (HID_USAGE_KEY_KEYBOARD_LEFTCONTROL)
#define LCONTROL (LEFT_CONTROL)
#define LCTRL (LEFT_CONTROL)
#define LCTL (LEFT_CONTROL)

/* Keyboard Left Shift */
#define LEFT_SHIFT (HID_USAGE_KEY_KEYBOARD_LEFTSHIFT)
#define LSHIFT (LEFT_SHIFT)
#define LSHFT (LEFT_SHIFT)
#define LSFT (LEFT_SHIFT)

/* Keyboard Left Alt */
#define LEFT_ALT (HID_USAGE_KEY_KEYBOARD_LEFTALT)
#define LALT (LEFT_ALT)

/* Keyboard Left GUI / Windows / Command / Meta */
#define LEFT_GUI (HID_USAGE_KEY_KEYBOARD_LEFT_GUI)
#define LEFT_WIN (LEFT_GUI)
#define LEFT_COMMAND (LEFT_GUI)
#define LEFT_META (LEFT_GUI)
#define LGUI (LEFT_GUI)
#define LWIN (LEFT_GUI)
#define LCOMMAND (LEFT_GUI)
#define LMETA (LEFT_GUI)

/* Keyboard Right Control */
#define RIGHT_CONTROL (HID_USAGE_KEY_KEYBOARD_RIGHTCONTROL)
#define RCONTROL (RIGHT_CONTROL)
#define RCTRL (RIGHT_CONTROL)
#define RCTL (RIGHT_CONTROL)

/* Keyboard Right Shift */
#define RIGHT_SHIFT (HID_USAGE_KEY_KEYBOARD_RIGHTSHIFT)
#define RSHIFT (RIGHT_SHIFT)
#define RSHFT (RIGHT_SHIFT)
#define RSFT (RIGHT_SHIFT)

/* Keyboard Right Alt */
#define RIGHT_ALT (HID_USAGE_KEY_KEYBOARD_RIGHTALT)
#define RALT (RIGHT_ALT)

/* Keyboard Right GUI / Windows / Command / Meta */
#define RIGHT_GUI (HID_USAGE_KEY_KEYBOARD_RIGHT_GUI)
#define RIGHT_WIN (RIGHT_GUI)
#define RIGHT_COMMAND (RIGHT_GUI)
#define RIGHT_META (RIGHT_GUI)
#define RGUI (RIGHT_GUI)
#define RWIN (RIGHT_GUI)
#define RCOMMAND (RIGHT_GUI)
#define RMETA (RIGHT_GUI)

/* Keyboard Play Pause (Linux/Android?) */
#define PLAY_PAUSE (0xE8)

/* Keyboard Stop (Linux/Android?) */
#define STOP2 (0xE9)

/* Keyboard Previous (Linux/Android?) */
#define PREVIOUS (0xEA)

/* Keyboard Next (Linux/Android?) */
#define NEXT (0xEB)

/* Keyboard Eject (Linux/Android?) */
#define EJECT (0xEC)

/* Keyboard Volume Up (Linux/Android?) */
#define VOLUME_UP2 (0xED)
#define VOLUP2 (VOLUME_UP2)
#define VOLU2 (VOLUME_UP2)

/* Keyboard Volume Down (Linux/Android?) */
#define VOLUME_DOWN2 (0xEE)
#define VOLUMEDN2 (VOLUME_DOWN2)
#define VOLDOWN2 (VOLUME_DOWN2)
#define VOLDN2 (VOLUME_DOWN2)
#define VOLD2 (VOLUME_DOWN2)

/* Keyboard Mute (Linux/Android?) */
#define MUTE2 (0xEF)

/* Keyboard WWW (Linux/Android?) */
#define WWW (0xF0)

/* Keyboard Back (Linux/Android?) */
#define BACK (0xF1)

/* Keyboard Forward (Linux/Android?) */
#define FORWARD (0xF2)

/* Keyboard Stop (Linux/Android?) */
#define STOP3 (0xF3)

/* Keyboard Find (Linux/Android?) */
#define FIND2 (0xF4)

/* Keyboard Scroll Up (Linux/Android?) */
#define SCROLL_UP (0xF5)
#define SCROLLUP (SCROLL_UP)

/* Keyboard Scroll Down (Linux/Android?) */
#define SCROLL_DOWN (0xF6)
#define SCROLLDN (SCROLL_DOWN)

/* Keyboard Edit (Linux/Android?) */
#define EDIT (0xF7)

/* Keyboard Sleep (Linux/Android?) */
#define SLEEP (0xF8)

/* Keyboard Power (Linux/Android?) */
#define LOCK (0xF9)
#define SCREENSAVER (LOCK)
#define COFFEE (LOCK)

/* Keyboard Refresh (Linux/Android?) */
#define REFRESH (0xFA)

/* Keyboard Calculator (Linux/Android?) */
#define CALCULATOR (0xFB)
#define CALC (CALCULATOR)

/* Consumer Sleep Mode */
#define C_SLEEP (HID_USAGE_CONSUMER_SLEEP_MODE)

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

/* Consumer Menu Value Increase */
#define C_MENU_INCREASE (HID_USAGE_CONSUMER_MENU_VALUE_INCREASE)
#define C_MENU_INC (C_MENU_INCREASE)

/* Consumer Menu Value Decrease */
#define C_MENU_DECREASE (HID_USAGE_CONSUMER_MENU_VALUE_DECREASE)
#define C_MENU_DEC (C_MENU_DECREASE)

/* Consumer Closed Caption */
#define C_CAPTIONS (HID_USAGE_CONSUMER_CLOSED_CAPTION)
#define C_SUBTITILES (C_CAPTIONS)

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

/* Consumer Display Brightness Increment */
#define C_BRIGHTNESS_INCREMENT (HID_USAGE_CONSUMER_DISPLAY_BRIGHTNESS_INCREMENT)
#define C_BRIGHTNESS_INC (C_BRIGHTNESS_INCREMENT)
#define C_BRIGHTNESS_UP (C_BRIGHTNESS_INCREMENT)
#define C_BRIUP (C_BRIGHTNESS_INCREMENT)

/* Consumer Display Brightness Decrement */
#define C_BRIGHTNESS_DECREMENT (HID_USAGE_CONSUMER_DISPLAY_BRIGHTNESS_DECREMENT)
#define C_BRIGHTNESS_DEC (C_BRIGHTNESS_DECREMENT)
#define C_BRIGHTNESS_DOWN (C_BRIGHTNESS_DECREMENT)
#define C_BRIDN (C_BRIGHTNESS_DECREMENT)

/* Consumer Recall Last */
#define C_RECALL_LAST (HID_USAGE_CONSUMER_RECALL_LAST)
#define C_LAST (C_RECALL_LAST)

/* Consumer Media Select Computer */
#define C_COMP (HID_USAGE_CONSUMER_MEDIA_SELECT_COMPUTER)

/* Consumer Media Select TV */
#define C_TV (HID_USAGE_CONSUMER_MEDIA_SELECT_TV)

/* Consumer Media Select WWW */
#define C_WWW (HID_USAGE_CONSUMER_MEDIA_SELECT_WWW)

/* Consumer Media Select DVD */
#define C_DVD (HID_USAGE_CONSUMER_MEDIA_SELECT_DVD)

/* Consumer Media Select Telephone */
#define C_PHONE (HID_USAGE_CONSUMER_MEDIA_SELECT_TELEPHONE)

/* Consumer Media Select Program Guide */
#define C_GUIDE (HID_USAGE_CONSUMER_MEDIA_SELECT_PROGRAM_GUIDE)

/* Consumer Media Select Video Phone */
#define C_CAM (HID_USAGE_CONSUMER_MEDIA_SELECT_VIDEO_PHONE)

/* Consumer Media Select Games */
#define C_GAMES (HID_USAGE_CONSUMER_MEDIA_SELECT_GAMES)

/* Consumer Media Select Messages */
#define C_MESSAGES (HID_USAGE_CONSUMER_MEDIA_SELECT_MESSAGES)

/* Consumer Media Select CD */
#define C_CD (HID_USAGE_CONSUMER_MEDIA_SELECT_CD)

/* Consumer Media Select VCR */
#define C_VCR (HID_USAGE_CONSUMER_MEDIA_SELECT_VCR)

/* Consumer Media Select Tuner */
#define C_TUNER (HID_USAGE_CONSUMER_MEDIA_SELECT_TUNER)

/* Consumer Quit */
#define C_EXIT (HID_USAGE_CONSUMER_QUIT)

/* Consumer Help */
#define C_HELP (HID_USAGE_CONSUMER_HELP)

/* Consumer Media Select Tape */
#define C_TAPE (HID_USAGE_CONSUMER_MEDIA_SELECT_TAPE)

/* Consumer Media Select Cable */
#define C_TV2 (HID_USAGE_CONSUMER_MEDIA_SELECT_CABLE)

/* Consumer Media Select Satellite */
#define C_SAT (HID_USAGE_CONSUMER_MEDIA_SELECT_SATELLITE)

/* Consumer Media Select Home */
#define C_DVR (HID_USAGE_CONSUMER_MEDIA_SELECT_HOME)

/* Consumer Channel Increment */
#define C_CHANNEL_INC (HID_USAGE_CONSUMER_CHANNEL_INCREMENT)
#define C_CHAN_INC (C_CHANNEL_INC)

/* Consumer Channel Decrement */
#define C_CHANNEL_DEC (HID_USAGE_CONSUMER_CHANNEL_DECREMENT)
#define C_CHAN_DEC (C_CHANNEL_DEC)

/* Consumer VCR Plus */
#define C_VCR2 (HID_USAGE_CONSUMER_VCR_PLUS)

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

/* Consumer Scan Previous Track */
#define C_PREVIOUS (HID_USAGE_CONSUMER_SCAN_PREVIOUS_TRACK)
#define C_PREV (C_PREVIOUS)

/* Consumer Stop */
#define C_STOP (HID_USAGE_CONSUMER_STOP)

/* Consumer Eject */
#define C_EJECT (HID_USAGE_CONSUMER_EJECT)

/* Consumer Repeat */
#define C_REPEAT (HID_USAGE_CONSUMER_REPEAT)

/* Consumer Stop/Eject */
#define C_STOP_EJECT (HID_USAGE_CONSUMER_STOP_EJECT)

/* Consumer Play/Pause */
#define C_PLAY_PAUSE (HID_USAGE_CONSUMER_PLAY_PAUSE)
#define C_PP (C_PLAY_PAUSE)

/* Consumer Mute */
#define C_MUTE (HID_USAGE_CONSUMER_MUTE)

/* Consumer Bass Boost */
#define C_BASS_BOOST (HID_USAGE_CONSUMER_BASS_BOOST)

/* Consumer Volume Increment */
#define C_VOLUME_INCREMENT (HID_USAGE_CONSUMER_VOLUME_INCREMENT)
#define C_VOLUME_INC (C_VOLUME_INCREMENT)
#define C_VOLUME_UP (C_VOLUME_INCREMENT)
#define C_VOLUP (C_VOLUME_INCREMENT)
#define C_VOLU (C_VOLUME_INCREMENT)

/* Consumer Volume Decrement */
#define C_VOLUME_DECREMENT (HID_USAGE_CONSUMER_VOLUME_DECREMENT)
#define C_VOLUME_DEC (C_VOLUME_DECREMENT)
#define C_VOLUME_DOWN (C_VOLUME_DECREMENT)
#define C_VOLDN (C_VOLUME_DECREMENT)
#define C_VOLD (C_VOLUME_DECREMENT)

/* Consumer Alternate Audio Increment */
#define C_ALTERNATE_AUDIO_INCREMENT (HID_USAGE_CONSUMER_ALTERNATE_AUDIO_INCREMENT)

/* Consumer AL Consumer Control Configuration */
#define C_AL_CCC (HID_USAGE_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION)

/* Consumer AL Word Processor */
#define C_AL_WORD (HID_USAGE_CONSUMER_AL_WORD_PROCESSOR)

/* Consumer AL Text Editor */
#define C_AL_TEXT_EDITOR (HID_USAGE_CONSUMER_AL_TEXT_EDITOR)

/* Consumer AL Spreadsheet */
#define C_AL_SPREADSHEET (HID_USAGE_CONSUMER_AL_SPREADSHEET)
#define C_AL_SS (C_AL_SPREADSHEET)

/* Consumer AL Graphics Editor */
#define C_AL_GRAPHICS_EDITOR (HID_USAGE_CONSUMER_AL_GRAPHICS_EDITOR)

/* Consumer AL Presentation App */
#define C_AL_PRESENTATION (HID_USAGE_CONSUMER_AL_PRESENTATION_APP)

/* Consumer AL Database App */
#define C_AL_DATABASE (HID_USAGE_CONSUMER_AL_DATABASE_APP)
#define C_AL_DB (C_AL_DATABASE)

/* Consumer AL Email Reader */
#define C_AL_EMAIL (HID_USAGE_CONSUMER_AL_EMAIL_READER)

/* Consumer AL Newsreader */
#define C_AL_NEWS (HID_USAGE_CONSUMER_AL_NEWSREADER)

/* Consumer AL Voicemail */
#define C_AL_VOICEMAIL (HID_USAGE_CONSUMER_AL_VOICEMAIL)
#define C_AL_VM (C_AL_VOICEMAIL)

/* Consumer AL Contacts/Address Book */
#define C_AL_CONTACTS (HID_USAGE_CONSUMER_AL_CONTACTS_ADDRESS_BOOK)
#define C_AL_ADDRESS_BOOK (C_AL_CONTACTS)

/* Consumer AL Calendar/Schedule */
#define C_AL_CALENDAR (HID_USAGE_CONSUMER_AL_CALENDAR_SCHEDULE)
#define C_AL_CAL (C_AL_CALENDAR)

/* Consumer AL Checkbook/Finance */
#define C_AL_FINANCE (HID_USAGE_CONSUMER_AL_CHECKBOOK_FINANCE)

/* Consumer AL Calculator */
#define C_AL_CALCULATOR (HID_USAGE_CONSUMER_AL_CALCULATOR)
#define C_AL_CALC (C_AL_CALCULATOR)

/* Consumer AL Local Machine Browser */
#define C_AL_MY_COMPUTER (HID_USAGE_CONSUMER_AL_LOCAL_MACHINE_BROWSER)

/* Consumer AL Internet Browser */
#define C_AL_WWW (HID_USAGE_CONSUMER_AL_INTERNET_BROWSER)

/* Consumer AL Network Chat */
#define C_AL_NETWORK_CHAT (HID_USAGE_CONSUMER_AL_NETWORK_CHAT)

/* Consumer AL Logoff */
#define C_AL_LOGOFF (HID_USAGE_CONSUMER_AL_LOGOFF)

/* Consumer AL Terminal Lock/Screensaver */
#define C_AL_LOCK (HID_USAGE_CONSUMER_AL_TERMINAL_LOCK_SCREENSAVER)
#define C_AL_SCREENSAVER (C_AL_LOCK)
#define C_AL_COFFEE (C_AL_LOCK)

/* Consumer AL Integrated Help Center */
#define C_AL_HELP (HID_USAGE_CONSUMER_AL_INTEGRATED_HELP_CENTER)

/* Consumer AL Documents */
#define C_AL_DOCUMENTS (HID_USAGE_CONSUMER_AL_DOCUMENTS)

/* Consumer AL Spell Check */
#define C_AL_SPELLCHECK (HID_USAGE_CONSUMER_AL_SPELL_CHECK)

/* Consumer AL Image Browser */
#define C_AL_IMAGE_BROWSER (HID_USAGE_CONSUMER_AL_IMAGE_BROWSER)
#define C_AL_IMAGES (C_AL_IMAGE_BROWSER)

/* Consumer AL Audio Browser */
#define C_AL_AUDIO_BROWSER (HID_USAGE_CONSUMER_AL_AUDIO_BROWSER)
#define C_AL_MUSIC (C_AL_AUDIO_BROWSER)

/* Consumer AL Instant Messaging */
#define C_AL_INSTANT_MESSAGING (HID_USAGE_CONSUMER_AL_INSTANT_MESSAGING)

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
#define C_AC_BOOKMARK (C_AC_BOOKMARKS)
#define C_AC_FAVOURITES (C_AC_BOOKMARKS)
#define C_AC_FAVOURITE (C_AC_BOOKMARKS)
#define C_AC_FAVORITES (C_AC_BOOKMARKS)
#define C_AC_FAVORITE (C_AC_BOOKMARKS)

/* Consumer AC Zoom In */
#define C_AC_ZOOM_IN (HID_USAGE_CONSUMER_AC_ZOOM_IN)
#define C_AC_ZOOMIN (C_AC_ZOOM_IN)

/* Consumer AC Zoom Out */
#define C_AC_ZOOM_OUT (HID_USAGE_CONSUMER_AC_ZOOM_OUT)
#define C_AC_ZOOMOUT (C_AC_ZOOM_OUT)

/* Consumer AC Zoom */
#define C_AC_ZOOM (HID_USAGE_CONSUMER_AC_ZOOM)

/* Consumer AC Scroll Up */
#define C_AC_SCROLL_UP (HID_USAGE_CONSUMER_AC_SCROLL_UP)
#define C_AC_SCROLLUP (C_AC_SCROLL_UP)

/* Consumer AC Scroll Down */
#define C_AC_SCROLL_DOWN (HID_USAGE_CONSUMER_AC_SCROLL_DOWN)
#define C_AC_SCROLLDOWN (C_AC_SCROLL_DOWN)
#define C_AC_SCROLLDN (C_AC_SCROLL_DOWN)

/* Consumer AC Cancel */
#define C_AC_CANCEL (HID_USAGE_CONSUMER_AC_CANCEL)

/* Consumer AC Redo/Repeat */
#define C_AC_REDO (HID_USAGE_CONSUMER_AC_REDO_REPEAT)

/* Consumer AC Reply */
#define C_AC_REPLY (HID_USAGE_CONSUMER_AC_REPLY)

/* Consumer AC Forward Msg */
#define C_AC_FORWARD_MAIL (HID_USAGE_CONSUMER_AC_FORWARD_MSG)
#define C_AC_FORWARDMAIL (C_AC_FORWARD_MAIL)
#define C_AC_FWDMAIL (C_AC_FORWARD_MAIL)

/* Consumer AC Send */
#define C_AC_SEND (HID_USAGE_CONSUMER_AC_SEND)

#define LCTL (0x01 << 0x10)
#define LSFT (0x02 << 0x10)
#define LALT (0x04 << 0x10)
#define LGUI (0x08 << 0x10)
#define RCTL (0x10 << 0x10)
#define RSFT (0x20 << 0x10)
#define RALT (0x40 << 0x10)
#define RGUI (0x80 << 0x10)
