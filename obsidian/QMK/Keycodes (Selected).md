==------I excluded the keycodes I definitely don't (want) to use / linux / mac------==
# Keycodes Overview[​](https://docs.qmk.fm/keycodes#keycodes-overview)

When defining a [keymap](https://docs.qmk.fm/keymap) each key needs a valid key definition. This page documents the symbols that correspond to keycodes that are available to you in QMK.

This is a reference only. Each group of keys links to the page documenting their functionality in more detail.

## Basic Keycodes[​](https://docs.qmk.fm/keycodes#basic-keycodes)

See also: [Basic Keycodes](https://docs.qmk.fm/keycodes_basic)

| Key                      | Aliases                         | Description                             | Windows |
| ------------------------ | ------------------------------- | --------------------------------------- | ------- |
| `KC_NO`                  | `XXXXXXX`                       | Ignore this key (NOOP)                  | _N/A_   |
| `KC_TRANSPARENT`         | `KC_TRNS`, `_______`            | Use the next lowest non-transparent key | _N/A_   |
| `KC_A`                   |                                 | `a` and `A`                             | ✔       |
| `KC_B`                   |                                 | `b` and `B`                             | ✔       |
| `KC_C`                   |                                 | `c` and `C`                             | ✔       |
| `KC_D`                   |                                 | `d` and `D`                             | ✔       |
| `KC_E`                   |                                 | `e` and `E`                             | ✔       |
| `KC_F`                   |                                 | `f` and `F`                             | ✔       |
| `KC_G`                   |                                 | `g` and `G`                             | ✔       |
| `KC_H`                   |                                 | `h` and `H`                             | ✔       |
| `KC_I`                   |                                 | `i` and `I`                             | ✔       |
| `KC_J`                   |                                 | `j` and `J`                             | ✔       |
| `KC_K`                   |                                 | `k` and `K`                             | ✔       |
| `KC_L`                   |                                 | `l` and `L`                             | ✔       |
| `KC_M`                   |                                 | `m` and `M`                             | ✔       |
| `KC_N`                   |                                 | `n` and `N`                             | ✔       |
| `KC_O`                   |                                 | `o` and `O`                             | ✔       |
| `KC_P`                   |                                 | `p` and `P`                             | ✔       |
| `KC_Q`                   |                                 | `q` and `Q`                             | ✔       |
| `KC_R`                   |                                 | `r` and `R`                             | ✔       |
| `KC_S`                   |                                 | `s` and `S`                             | ✔       |
| `KC_T`                   |                                 | `t` and `T`                             | ✔       |
| `KC_U`                   |                                 | `u` and `U`                             | ✔       |
| `KC_V`                   |                                 | `v` and `V`                             | ✔       |
| `KC_W`                   |                                 | `w` and `W`                             | ✔       |
| `KC_X`                   |                                 | `x` and `X`                             | ✔       |
| `KC_Y`                   |                                 | `y` and `Y`                             | ✔       |
| `KC_Z`                   |                                 | `z` and `Z`                             | ✔       |
| `KC_1`                   |                                 | `1` and `!`                             | ✔       |
| `KC_2`                   |                                 | `2` and `@`                             | ✔       |
| `KC_3`                   |                                 | `3` and `#`                             | ✔       |
| `KC_4`                   |                                 | `4` and `$`                             | ✔       |
| `KC_5`                   |                                 | `5` and `%`                             | ✔       |
| `KC_6`                   |                                 | `6` and `^`                             | ✔       |
| `KC_7`                   |                                 | `7` and `&`                             | ✔       |
| `KC_8`                   |                                 | `8` and `*`                             | ✔       |
| `KC_9`                   |                                 | `9` and `(`                             | ✔       |
| `KC_0`                   |                                 | `0` and `)`                             | ✔       |
| `KC_ENTER`               | `KC_ENT`                        | Return (Enter)                          | ✔       |
| `KC_ESCAPE`              | `KC_ESC`                        | Escape                                  | ✔       |
| `KC_BACKSPACE`           | `KC_BSPC`                       | Delete (Backspace)                      | ✔       |
| `KC_TAB`                 |                                 | Tab                                     | ✔       |
| `KC_SPACE`               | `KC_SPC`                        | Spacebar                                | ✔       |
| `KC_MINUS`               | `KC_MINS`                       | `-` and `_`                             | ✔       |
| `KC_EQUAL`               | `KC_EQL`                        | `=` and `+`                             | ✔       |
| `KC_LEFT_BRACKET`        | `KC_LBRC`                       | `[` and `{`                             | ✔       |
| `KC_RIGHT_BRACKET`       | `KC_RBRC`                       | `]` and `}`                             | ✔       |
| `KC_BACKSLASH`           | `KC_BSLS`                       | `\` and `\|`                            | ✔       |
| `KC_NONUS_HASH`          | `KC_NUHS`                       | Non-US `#` and `~`                      | ✔       |
| `KC_SEMICOLON`           | `KC_SCLN`                       | `;` and `:`                             | ✔       |
| `KC_QUOTE`               | `KC_QUOT`                       | `'` and `"`                             | ✔       |
| `KC_GRAVE`               | `KC_GRV`                        | `` ` `` and `~`                         | ✔       |
| `KC_COMMA`               | `KC_COMM`                       | `,` and `<`                             | ✔       |
| `KC_DOT`                 |                                 | `.` and `>`                             | ✔       |
| `KC_SLASH`               | `KC_SLSH`                       | `/` and `?`                             | ✔       |
| `KC_CAPS_LOCK`           | `KC_CAPS`                       | Caps Lock                               | ✔       |
| `KC_F1`                  |                                 | F1                                      | ✔       |
| `KC_F2`                  |                                 | F2                                      | ✔       |
| `KC_F3`                  |                                 | F3                                      | ✔       |
| `KC_F4`                  |                                 | F4                                      | ✔       |
| `KC_F5`                  |                                 | F5                                      | ✔       |
| `KC_F6`                  |                                 | F6                                      | ✔       |
| `KC_F7`                  |                                 | F7                                      | ✔       |
| `KC_F8`                  |                                 | F8                                      | ✔       |
| `KC_F9`                  |                                 | F9                                      | ✔       |
| `KC_F10`                 |                                 | F10                                     | ✔       |
| `KC_F11`                 |                                 | F11                                     | ✔       |
| `KC_F12`                 |                                 | F12                                     | ✔       |
| `KC_PRINT_SCREEN`        | `KC_PSCR`                       | Print Screen                            | ✔       |
| `KC_SCROLL_LOCK`         | `KC_SCRL`, `KC_BRMD`            | Scroll Lock, Brightness Down (macOS)    | ✔       |
| `KC_PAUSE`               | `KC_PAUS`, `KC_BRK`, `KC_BRMU`  | Pause, Brightness Up (macOS)            | ✔       |
| `KC_INSERT`              | `KC_INS`                        | Insert                                  | ✔       |
| `KC_HOME`                |                                 | Home                                    | ✔       |
| `KC_PAGE_UP`             | `KC_PGUP`                       | Page Up                                 | ✔       |
| `KC_DELETE`              | `KC_DEL`                        | Forward Delete                          | ✔       |
| `KC_END`                 |                                 | End                                     | ✔       |
| `KC_PAGE_DOWN`           | `KC_PGDN`                       | Page Down                               | ✔       |
| `KC_RIGHT`               | `KC_RGHT`                       | Right Arrow                             | ✔       |
| `KC_LEFT`                |                                 | Left Arrow                              | ✔       |
| `KC_DOWN`                |                                 | Down Arrow                              | ✔       |
| `KC_UP`                  |                                 | Up Arrow                                | ✔       |
| `KC_NUM_LOCK`            | `KC_NUM`                        | Keypad Num Lock and Clear               | ✔       |
| `KC_KP_SLASH`            | `KC_PSLS`                       | Keypad `/`                              | ✔       |
| `KC_KP_ASTERISK`         | `KC_PAST`                       | Keypad `*`                              | ✔       |
| `KC_KP_MINUS`            | `KC_PMNS`                       | Keypad `-`                              | ✔       |
| `KC_KP_PLUS`             | `KC_PPLS`                       | Keypad `+`                              | ✔       |
| `KC_KP_ENTER`            | `KC_PENT`                       | Keypad Enter                            | ✔       |
| `KC_KP_1`                | `KC_P1`                         | Keypad `1` and End                      | ✔       |
| `KC_KP_2`                | `KC_P2`                         | Keypad `2` and Down Arrow               | ✔       |
| `KC_KP_3`                | `KC_P3`                         | Keypad `3` and Page Down                | ✔       |
| `KC_KP_4`                | `KC_P4`                         | Keypad `4` and Left Arrow               | ✔       |
| `KC_KP_5`                | `KC_P5`                         | Keypad `5`                              | ✔       |
| `KC_KP_6`                | `KC_P6`                         | Keypad `6` and Right Arrow              | ✔       |
| `KC_KP_7`                | `KC_P7`                         | Keypad `7` and Home                     | ✔       |
| `KC_KP_8`                | `KC_P8`                         | Keypad `8` and Up Arrow                 | ✔       |
| `KC_KP_9`                | `KC_P9`                         | Keypad `9` and Page Up                  | ✔       |
| `KC_KP_0`                | `KC_P0`                         | Keypad `0` and Insert                   | ✔       |
| `KC_KP_DOT`              | `KC_PDOT`                       | Keypad `.` and Delete                   | ✔       |
| `KC_NONUS_BACKSLASH`     | `KC_NUBS`                       | Non-US `\` and `\|`                     | ✔       |
| `KC_APPLICATION`         | `KC_APP`                        | Application (Windows Context Menu Key)  | ✔       |
| `KC_KP_EQUAL`            | `KC_PEQL`                       | Keypad `=`                              | ✔       |
| `KC_F13`                 |                                 | F13                                     | ✔       |
| `KC_F14`                 |                                 | F14                                     | ✔       |
| `KC_F15`                 |                                 | F15                                     | ✔       |
| `KC_F16`                 |                                 | F16                                     | ✔       |
| `KC_F17`                 |                                 | F17                                     | ✔       |
| `KC_F18`                 |                                 | F18                                     | ✔       |
| `KC_F19`                 |                                 | F19                                     | ✔       |
| `KC_F20`                 |                                 | F20                                     | ✔       |
| `KC_F21`                 |                                 | F21                                     | ✔       |
| `KC_F22`                 |                                 | F22                                     | ✔       |
| `KC_F23`                 |                                 | F23                                     | ✔       |
| `KC_F24`                 |                                 | F24                                     | ✔       |
| `KC_LOCKING_CAPS_LOCK`   | `KC_LCAP`                       | Locking Caps Lock                       | ✔       |
| `KC_LOCKING_NUM_LOCK`    | `KC_LNUM`                       | Locking Num Lock                        | ✔       |
| `KC_LOCKING_SCROLL_LOCK` | `KC_LSCR`                       | Locking Scroll Lock                     | ✔       |
| `KC_INTERNATIONAL_1`     | `KC_INT1`                       | International 1                         | ✔       |
| `KC_INTERNATIONAL_2`     | `KC_INT2`                       | International 2                         | ✔       |
| `KC_INTERNATIONAL_3`     | `KC_INT3`                       | International 3                         | ✔       |
| `KC_INTERNATIONAL_4`     | `KC_INT4`                       | International 4                         | ✔       |
| `KC_INTERNATIONAL_5`     | `KC_INT5`                       | International 5                         | ✔       |
| `KC_LEFT_CTRL`           | `KC_LCTL`                       | Left Control                            | ✔       |
| `KC_LEFT_SHIFT`          | `KC_LSFT`                       | Left Shift                              | ✔       |
| `KC_LEFT_ALT`            | `KC_LALT`, `KC_LOPT`            | Left Alt (Option)                       | ✔       |
| `KC_LEFT_GUI`            | `KC_LGUI`, `KC_LCMD`, `KC_LWIN` | Left GUI (Windows/Command/Meta key)     | ✔       |
| `KC_RIGHT_CTRL`          | `KC_RCTL`                       | Right Control                           | ✔       |
| `KC_RIGHT_SHIFT`         | `KC_RSFT`                       | Right Shift                             | ✔       |
| `KC_RIGHT_ALT`           | `KC_RALT`, `KC_ROPT`, `KC_ALGR` | Right Alt (Option/AltGr)                | ✔       |
| `KC_RIGHT_GUI`           | `KC_RGUI`, `KC_RCMD`, `KC_RWIN` | Right GUI (Windows/Command/Meta key)    | ✔       |
| `KC_SYSTEM_POWER`        | `KC_PWR`                        | System Power Down                       | ✔       |
| `KC_SYSTEM_SLEEP`        | `KC_SLEP`                       | System Sleep                            | ✔       |
| `KC_AUDIO_MUTE`          | `KC_MUTE`                       | Mute                                    | ✔       |
| `KC_AUDIO_VOL_UP`        | `KC_VOLU`                       | Volume Up                               | ✔       |
| `KC_AUDIO_VOL_DOWN`      | `KC_VOLD`                       | Volume Down                             | ✔       |
| `KC_MEDIA_NEXT_TRACK`    | `KC_MNXT`                       | Next Track                              | ✔       |
| `KC_MEDIA_PREV_TRACK`    | `KC_MPRV`                       | Previous Track                          | ✔       |
| `KC_MEDIA_STOP`          | `KC_MSTP`                       | Stop Track                              | ✔       |
| `KC_MEDIA_PLAY_PAUSE`    | `KC_MPLY`                       | Play/Pause Track                        | ✔       |
| `KC_MEDIA_SELECT`        | `KC_MSEL`                       | Launch Media Player                     | ✔       |
| `KC_MAIL`                | 656                             | Launch Mail                             | ✔       |
| `KC_CALCULATOR`          | `KC_CALC`                       | Launch Calculator                       | ✔       |
| `KC_MY_COMPUTER`         | `KC_MYCM`                       | Launch My Computer                      | ✔       |
| `KC_WWW_SEARCH`          | `KC_WSCH`                       | Browser Search                          | ✔       |
| `KC_WWW_HOME`            | `KC_WHOM`                       | Browser Home                            | ✔       |
| `KC_WWW_BACK`            | `KC_WBAK`                       | Browser Back                            | ✔       |
| `KC_WWW_FORWARD`         | `KC_WFWD`                       | Browser Forward                         | ✔       |
| `KC_WWW_STOP`            | `KC_WSTP`                       | Browser Stop                            | ✔       |
| `KC_WWW_REFRESH`         | `KC_WREF`                       | Browser Refresh                         | ✔       |
| `KC_WWW_FAVORITES`       | `KC_WFAV`                       | Browser Favorites                       | ✔       |
| `KC_MEDIA_FAST_FORWARD`  | `KC_MFFD`                       | Next Track                              | ✔       |
| `KC_MEDIA_REWIND`        | `KC_MRWD`                       | Previous Track                          | ✔6      |
| `KC_BRIGHTNESS_UP`       | `KC_BRIU`                       | Brightness Up                           | ✔       |
| `KC_BRIGHTNESS_DOWN`     | `KC_BRID`                       | Brightness Down                         | ✔       |
| `KC_CONTROL_PANEL`       | `KC_CPNL`                       | Open Control Panel                      | ✔       |
| `KC_ASSISTANT`           | `KC_ASST`                       | Launch Context-Aware Assistant          | ✔       |


6. WMP does not recognize the Rewind key, but both alter playback speed in VLC.

## Quantum Keycodes[​](https://docs.qmk.fm/keycodes#quantum-keycodes)

See also: [Quantum Keycodes](https://docs.qmk.fm/quantum_keycodes#qmk-keycodes)

|Key|Aliases|Description|
|---|---|---|
|`QK_BOOTLOADER`|`QK_BOOT`|Put the keyboard into bootloader mode for flashing|
|`QK_DEBUG_TOGGLE`|`DB_TOGG`|Toggle debug mode|
|`QK_CLEAR_EEPROM`|`EE_CLR`|Reinitializes the keyboard's EEPROM (persistent memory)|
|`QK_MAKE`||Sends `qmk compile -kb (keyboard) -km (keymap)`, or `qmk flash` if shift is held. Puts keyboard into bootloader mode if shift & control are held|
|`QK_REBOOT`|`QK_RBT`|Resets the keyboard. Does not load the bootloader|

## Caps Word[​](https://docs.qmk.fm/keycodes#caps-word)

See also: [Caps Word](https://docs.qmk.fm/features/caps_word)

|Key|Aliases|Description|
|---|---|---|
|`QK_CAPS_WORD_TOGGLE`|`CW_TOGG`|Toggles Caps Word|
Like Capslock but only for one word


## Key Lock[​](https://docs.qmk.fm/keycodes#key-lock)

See also: [Key Lock](https://docs.qmk.fm/features/key_lock)

| Key       | Description                                                    |
| --------- | -------------------------------------------------------------- |
| `QK_LOCK` | Hold down the next key pressed, until the key is pressed again |

## Layer Switching[​](https://docs.qmk.fm/keycodes#layer-switching)

See also: [Layer Switching](https://docs.qmk.fm/feature_layers#switching-and-toggling-layers)

| Key              | Description                                                                                                                                                                                         |
| ---------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `DF(layer)`      | Set the base (default) layer until the keyboard loses power                                                                                                                                         |
| `PDF(layer)`     | Set the base (default) layer in EEPROM                                                                                                                                                              |
| `MO(layer)`      | Momentarily turn on `layer` when pressed (requires `KC_TRNS` on destination layer)                                                                                                                  |
| `OSL(layer)`     | Momentarily activates `layer` until a key is pressed. See [One Shot Keys](https://docs.qmk.fm/one_shot_keys) for details.                                                                           |
| `LM(layer, mod)` | Momentarily turn on `layer` (like MO) with `mod` active as well. Where `mod` is a mods_bit. Mods can be viewed [here](https://docs.qmk.fm/mod_tap). Example Implementation: `LM(LAYER_1, MOD_LALT)` |
| `LT(layer, kc)`  | Turn on `layer` when held, `kc` when tapped                                                                                                                                                         |
| `TG(layer)`      | Toggle `layer` on or off                                                                                                                                                                            |
| `TO(layer)`      | Turns on `layer` and turns off all other layers, except the default layer                                                                                                                           |
| `TT(layer)`      | Normally acts like MO unless it's tapped multiple times, which toggles `layer` on                                                                                                                   |

## Leader Key[​](https://docs.qmk.fm/keycodes#leader-key)

See also: [Leader Key](https://docs.qmk.fm/features/leader_key)

|Key|Description|
|---|---|
|`QK_LEAD`|Begins a leader sequence|

## Mouse Keys[​](https://docs.qmk.fm/keycodes#mouse-keys)

See also: [Mouse Keys](https://docs.qmk.fm/features/mouse_keys)

| Key                       | Aliases   | Description                 |
| ------------------------- | --------- | --------------------------- |
| `QK_MOUSE_CURSOR_UP`      | `MS_UP`   | Mouse cursor up             |
| `QK_MOUSE_CURSOR_DOWN`    | `MS_DOWN` | Mouse cursor down           |
| `QK_MOUSE_CURSOR_LEFT`    | `MS_LEFT` | Mouse cursor left           |
| `QK_MOUSE_CURSOR_RIGHT`   | `MS_RGHT` | Mouse cursor right          |
| `QK_MOUSE_BUTTON_1`       | `MS_BTN1` | Mouse button 1              |
| `QK_MOUSE_BUTTON_2`       | `MS_BTN2` | Mouse button 2              |
| `QK_MOUSE_BUTTON_3`       | `MS_BTN3` | Mouse button 3              |
| `QK_MOUSE_BUTTON_4`       | `MS_BTN4` | Mouse button 4              |
| `QK_MOUSE_BUTTON_5`       | `MS_BTN5` | Mouse button 5              |
| `QK_MOUSE_BUTTON_6`       | `MS_BTN6` | Mouse button 6              |
| `QK_MOUSE_BUTTON_7`       | `MS_BTN7` | Mouse button 7              |
| `QK_MOUSE_BUTTON_8`       | `MS_BTN8` | Mouse button 8              |
| `QK_MOUSE_WHEEL_UP`       | `MS_WHLU` | Mouse wheel up              |
| `QK_MOUSE_WHEEL_DOWN`     | `MS_WHLD` | Mouse wheel down            |
| `QK_MOUSE_WHEEL_LEFT`     | `MS_WHLL` | Mouse wheel left            |
| `QK_MOUSE_WHEEL_RIGHT`    | `MS_WHLR` | Mouse wheel right           |
| `QK_MOUSE_ACCELERATION_0` | `MS_ACL0` | Set mouse acceleration to 0 |
| `QK_MOUSE_ACCELERATION_1` | `MS_ACL1` | Set mouse acceleration to 1 |
| `QK_MOUSE_ACCELERATION_2` | `MS_ACL2` | Set mouse acceleration to 2 |

## Modifiers[​](https://docs.qmk.fm/keycodes#modifiers)

See also: [Modifier Keys](https://docs.qmk.fm/feature_advanced_keycodes#modifier-keys)

| Key        | Aliases                            | Description                                           |
| ---------- | ---------------------------------- | ----------------------------------------------------- |
| `LCTL(kc)` | `C(kc)`                            | Hold Left Control and press `kc`                      |
| `LSFT(kc)` | `S(kc)`                            | Hold Left Shift and press `kc`                        |
| `LALT(kc)` | `A(kc)`, `LOPT(kc)`                | Hold Left Alt and press `kc`                          |
| `LGUI(kc)` | `G(kc)`, `LCMD(kc)`, `LWIN(kc)`    | Hold Left GUI and press `kc`                          |
| `RCTL(kc)` |                                    | Hold Right Control and press `kc`                     |
| `RSFT(kc)` |                                    | Hold Right Shift and press `kc`                       |
| `RALT(kc)` | `ROPT(kc)`, `ALGR(kc)`             | Hold Right Alt (AltGr) and press `kc`                 |
| `RGUI(kc)` | `RCMD(kc)`, `RWIN(kc)`             | Hold Right GUI and press `kc`                         |
| `LSG(kc)`  | `SGUI(kc)`, `SCMD(kc)`, `SWIN(kc)` | Hold Left Shift and Left GUI and press `kc`           |
| `LAG(kc)`  |                                    | Hold Left Alt and Left GUI and press `kc`             |
| `RSG(kc)`  |                                    | Hold Right Shift and Right GUI and press `kc`         |
| `RAG(kc)`  |                                    | Hold Right Alt and Right GUI and press `kc`           |
| `LCA(kc)`  |                                    | Hold Left Control and Alt and press `kc`              |
| `LSA(kc)`  |                                    | Hold Left Shift and Left Alt and press `kc`           |
| `RSA(kc)`  | `SAGR(kc)`                         | Hold Right Shift and Right Alt (AltGr) and press `kc` |
| `RCS(kc)`  |                                    | Hold Right Control and Right Shift and press `kc`     |
| `LCAG(kc)` |                                    | Hold Left Control, Alt and GUI and press `kc`         |
| `MEH(kc)`  |                                    | Hold Left Control, Shift and Alt and press `kc`       |
| `HYPR(kc)` |                                    | Hold Left Control, Shift, Alt and GUI and press `kc`  |
| `KC_MEH`   |                                    | Left Control, Shift and Alt                           |
| `KC_HYPR`  |                                    | Left Control, Shift, Alt and GUI                      |

## Mod-Tap Keys[​](https://docs.qmk.fm/keycodes#mod-tap-keys)

See also: [Mod-Tap](https://docs.qmk.fm/mod_tap)

| Key           | Aliases                                                           | Description                                                                                                                                   |
| ------------- | ----------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| `MT(mod, kc)` |                                                                   | `mod` when held, `kc` when tapped                                                                                                             |
| `LCTL_T(kc)`  | `CTL_T(kc)`                                                       | Left Control when held, `kc` when tapped                                                                                                      |
| `LSFT_T(kc)`  | `SFT_T(kc)`                                                       | Left Shift when held, `kc` when tapped                                                                                                        |
| `LALT_T(kc)`  | `LOPT_T(kc)`, `ALT_T(kc)`, `OPT_T(kc)`                            | Left Alt when held, `kc` when tapped                                                                                                          |
| `LGUI_T(kc)`  | `LCMD_T(kc)`, `LWIN_T(kc)`, `GUI_T(kc)`, `CMD_T(kc)`, `WIN_T(kc)` | Left GUI when held, `kc` when tapped                                                                                                          |
| `RCTL_T(kc)`  |                                                                   | Right Control when held, `kc` when tapped                                                                                                     |
| `RSFT_T(kc)`  |                                                                   | Right Shift when held, `kc` when tapped                                                                                                       |
| `RALT_T(kc)`  | `ROPT_T(kc)`, `ALGR_T(kc)`                                        | Right Alt (AltGr) when held, `kc` when tapped                                                                                                 |
| `RGUI_T(kc)`  | `RCMD_T(kc)`, `RWIN_T(kc)`                                        | Right GUI when held, `kc` when tapped                                                                                                         |
| `LSG_T(kc)`   | `SGUI_T(kc)`, `SCMD_T(kc)`, `SWIN_T(kc)`                          | Left Shift and GUI when held, `kc` when tapped                                                                                                |
| `LAG_T(kc)`   |                                                                   | Left Alt and GUI when held, `kc` when tapped                                                                                                  |
| `RSG_T(kc)`   |                                                                   | Right Shift and GUI when held, `kc` when tapped                                                                                               |
| `RAG_T(kc)`   |                                                                   | Right Alt and GUI when held, `kc` when tapped                                                                                                 |
| `LCA_T(kc)`   |                                                                   | Left Control and Alt when held, `kc` when tapped                                                                                              |
| `LSA_T(kc)`   |                                                                   | Left Shift and Left Alt when held, `kc` when tapped                                                                                           |
| `RSA_T(kc)`   | `SAGR_T(kc)`                                                      | Right Shift and Right Alt (AltGr) when held, `kc` when tapped                                                                                 |
| `RCS_T(kc)`   |                                                                   | Right Control and Right Shift when held, `kc` when tapped                                                                                     |
| `LCAG_T(kc)`  |                                                                   | Left Control, Alt and GUI when held, `kc` when tapped                                                                                         |
| `RCAG_T(kc)`  |                                                                   | Right Control, Alt and GUI when held, `kc` when tapped                                                                                        |
| `C_S_T(kc)`   |                                                                   | Left Control and Shift when held, `kc` when tapped                                                                                            |
| `MEH_T(kc)`   |                                                                   | Left Control, Shift and Alt when held, `kc` when tapped                                                                                       |
| `HYPR_T(kc)`  | `ALL_T(kc)`                                                       | Left Control, Shift, Alt and GUI when held, `kc` when tapped - more info [here](https://brettterpstra.com/2012/12/08/a-useful-caps-lock-key/) |

## Tapping Term Keys[​](https://docs.qmk.fm/keycodes#tapping-term-keys)

See also: [Dynamic Tapping Term](https://docs.qmk.fm/tap_hold#dynamic-tapping-term)

|Key|Aliases|Description|
|---|---|---|
|`QK_DYNAMIC_TAPPING_TERM_PRINT`|`DT_PRNT`|Types the current tapping term, in milliseconds|
|`QK_DYNAMIC_TAPPING_TERM_UP`|`DT_UP`|Increases the current tapping term by `DYNAMIC_TAPPING_TERM_INCREMENT`ms (5ms by default)|
|`QK_DYNAMIC_TAPPING_TERM_DOWN`|`DT_DOWN`|Decreases the current tapping term by `DYNAMIC_TAPPING_TERM_INCREMENT`ms (5ms by default)|

## US ANSI Shifted Symbols[​](https://docs.qmk.fm/keycodes#us-ansi-shifted-symbols)

See also: [US ANSI Shifted Symbols](https://docs.qmk.fm/keycodes_us_ansi_shifted)

| Key                      | Aliases             | Description |
| ------------------------ | ------------------- | ----------- |
| `KC_TILDE`               | `KC_TILD`           | `~`         |
| `KC_EXCLAIM`             | `KC_EXLM`           | `!`         |
| `KC_AT`                  |                     | `@`         |
| `KC_HASH`                |                     | `#`         |
| `KC_DOLLAR`              | `KC_DLR`            | `$`         |
| `KC_PERCENT`             | `KC_PERC`           | `%`         |
| `KC_CIRCUMFLEX`          | `KC_CIRC`           | `^`         |
| `KC_AMPERSAND`           | `KC_AMPR`           | `&`         |
| `KC_ASTERISK`            | `KC_ASTR`           | `*`         |
| `KC_LEFT_PAREN`          | `KC_LPRN`           | `(`         |
| `KC_RIGHT_PAREN`         | `KC_RPRN`           | `)`         |
| `KC_UNDERSCORE`          | `KC_UNDS`           | `_`         |
| `KC_PLUS`                |                     | `+`         |
| `KC_LEFT_CURLY_BRACE`    | `KC_LCBR`           | `{`         |
| `KC_RIGHT_CURLY_BRACE`   | `KC_RCBR`           | `}`         |
| `KC_PIPE`                |                     | `\|`        |
| `KC_COLON`               | `KC_COLN`           | `:`         |
| `KC_DOUBLE_QUOTE`        | `KC_DQUO`, `KC_DQT` | `"`         |
| `KC_LEFT_ANGLE_BRACKET`  | `KC_LABK`, `KC_LT`  | `<`         |
| `KC_RIGHT_ANGLE_BRACKET` | `KC_RABK`, `KC_GT`  | `>`         |
| `KC_QUESTION`            | `KC_QUES`           | `?`         |

## One Shot Keys[​](https://docs.qmk.fm/keycodes#one-shot-keys)

See also: [One Shot Keys](https://docs.qmk.fm/one_shot_keys)

| Key                  | Aliases   | Description                        |
| -------------------- | --------- | ---------------------------------- |
| `OSM(mod)`           |           | Hold `mod` for one keypress        |
| `OSL(layer)`         |           | Switch to `layer` for one keypress |
| `QK_ONE_SHOT_TOGGLE` | `OS_TOGG` | Toggles One Shot keys status       |
| `QK_ONE_SHOT_ON`     | `OS_ON`   | Turns One Shot keys on             |
| `QK_ONE_SHOT_OFF`    | `OS_OFF`  | Turns One Shot keys off            |

## Repeat Key[​](https://docs.qmk.fm/keycodes#repeat-key)

See also: [Repeat Key](https://docs.qmk.fm/features/repeat_key)

|Keycode|Aliases|Description|
|---|---|---|
|`QK_REPEAT_KEY`|`QK_REP`|Repeat the last pressed key|
|`QK_ALT_REPEAT_KEY`|`QK_AREP`|Perform alternate of the last key|

## Space Cadet[​](https://docs.qmk.fm/keycodes#space-cadet)

See also: [Space Cadet](https://docs.qmk.fm/features/space_cadet)

| Key                                            | Aliases   | Description                              |
| ---------------------------------------------- | --------- | ---------------------------------------- |
| `QK_SPACE_CADET_LEFT_CTRL_PARENTHESIS_OPEN`    | `SC_LCPO` | Left Control when held, `(` when tapped  |
| `QK_SPACE_CADET_RIGHT_CTRL_PARENTHESIS_CLOSE`  | `SC_RCPC` | Right Control when held, `)` when tapped |
| `QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN`   | `SC_LSPO` | Left Shift when held, `(` when tapped    |
| `QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE` | `SC_RSPC` | Right Shift when held, `)` when tapped   |
| `QK_SPACE_CADET_LEFT_ALT_PARENTHESIS_OPEN`     | `SC_LAPO` | Left Alt when held, `(` when tapped      |
| `QK_SPACE_CADET_RIGHT_ALT_PARENTHESIS_CLOSE`   | `SC_RAPC` | Right Alt when held, `)` when tapped     |
| `QK_SPACE_CADET_RIGHT_SHIFT_ENTER`             | `SC_SENT` | Right Shift when held, Enter when tapped |
