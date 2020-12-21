---
title: Combo Behavior
sidebar_label: Combos
---

## Summary

Combo keys are a way to combine multiple keypresses to output a different key. For example, you can hit the Q and W keys on your keyboard to output escape.

### Configuration

Combos are specified like this:

```
/ {
	behaviors {
		combo_esc {
			compatible = "zmk,behavior-combo";
			label = "COMBO_ESC";
			timeout-ms = <50>;
			key-positions = <0 1>;
			bindings = <&kp ESC>;
		};
	};
};
```

- Change `combo_esc` and `COMBO_ESC` to unique values. The name doesn't really matter, but convention is to start the node name with `combo_` and the label with `COMBO_`.
- The `compatible` property should always be `"zmk,behavior-combo"` for combos.
- `timeout-ms` is the number of milliseconds that all keys of the combo must be pressed.
- `key-positions` is an array of key positions. See the info section below about how to figure out the positions on your board.
- `bindings` is the behavior that is activated when the behavior is pressed.
- (advanced) you can specify `slow-release` if you want the combo binding to be released when all key-positions are released. The default is to release the combo as soon as any of the keys is released.

:::info

Key positions are numbered like the keys in your keymap, starting at 0. So, if the first key in your keymap is `Q`, this key is in position `0`. The next key (possibly `W`) will have position 1, etcetera.

:::

### Advanced usage

- Partially overlapping combos like `0 1` and `0 2` are supported.
- Fully overlapping combos like `0 1` and `0 1 2` are supported.
- You are not limited to `&kp` bindings. You can use all ZMK behaviors there, like `&mo`, `&bt`, `&mt`, `&lt` etc.

### Advanced configuration

There are three global combo parameters which are set through KConfig. You can set them in the `<boardname>.conf` file in the same directory as your keymap file.

- `CONFIG_ZMK_BHV_COMBO_MAX_PRESSED_COMBOS` is the number of combos that can be active at the same time. Default 4.
- `CONFIG_ZMK_BHV_COMBO_MAX_COMBOS_PER_KEY` is the maximum number of combos that can be active on a key position. Defaults to 5. (So you can have 5 separate combos that use position `3` for example)
- `CONFIG_ZMK_BHV_COMBO_MAX_KEYS_PER_COMBO` is the maximum number of keys that need to be pressed to activate a combo. Default 4. If you want a combo that triggers when pressing 5 keys, you'd set this to 5 for example.
