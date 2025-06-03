/* Copyright 2024 Vaarai
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

/* Layers definitions */
enum layers {
  _ALPHA,
  _QWERTY,
  _LOWER,
  _UPPER,
  _ADJUST
};

const uint16_t PROGMEM alt_up[] = {MOD_MASK_ALT, KC_UP, COMBO_END};
const uint16_t PROGMEM alt_down[] = {MOD_MASK_ALT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM alt_left[] = {MOD_MASK_ALT, KC_LEFT, COMBO_END};
const uint16_t PROGMEM alt_right[] = {MOD_MASK_ALT, KC_RIGHT, COMBO_END};
combo_t key_combos[] = {
    COMBO(alt_up, MS_WHLU),
    COMBO(alt_down, MS_WHLD),
    COMBO(alt_left, MS_WHLL),
    COMBO(alt_right, MS_WHLR),
};

// Tap Dance declarations
enum {
    TD_ESC_QW,      // ESC/_QWERTY

    TD_PLS_MIN,     // +-
    TD_AST_SLH,     // */

    TD_LPR_LBR,     // ({
    TD_RPR_RBR,     // )}

    TD_LRC_LBK,     // [<
    TD_RRC_RBK,     // ]>

    TD_COM_DOT,     // ,.
    TD_EXL_QST,     // !?

    TD_AMP_PIP,     // &|
    TD_AT_HASH,     // @#
    TD_TIL_CIR,     // ~^
    TD_DLR_PER,     // $%
    TD_EQL_UND,     // =_

};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_ESC_QW] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_ESC, _QWERTY),

    [TD_PLS_MIN] = ACTION_TAP_DANCE_DOUBLE(KC_KP_PLUS, KC_KP_MINUS),
    [TD_AST_SLH] = ACTION_TAP_DANCE_DOUBLE(KC_KP_ASTERISK, KC_KP_SLASH),

    [TD_LPR_LBR] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LCBR),
    [TD_RPR_RBR] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RCBR),
    
    [TD_LRC_LBK] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_LABK),
    [TD_RRC_RBK] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_RABK),

    [TD_COM_DOT] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_DOT),
    [TD_EXL_QST] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, KC_QUES),

    [TD_AMP_PIP] = ACTION_TAP_DANCE_DOUBLE(KC_AMPR, KC_PIPE),
    [TD_AT_HASH] = ACTION_TAP_DANCE_DOUBLE(KC_AT,   KC_HASH),
    [TD_TIL_CIR] = ACTION_TAP_DANCE_DOUBLE(KC_TILD, KC_CIRC),
    [TD_DLR_PER] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  KC_PERC),
    [TD_EQL_UND] = ACTION_TAP_DANCE_DOUBLE(KC_EQL,  KC_UNDS),
};

const key_override_t slash_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t comm_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_QUES);
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_EXLM);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&slash_key_override,
    &comm_key_override,
    &dot_key_override
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       TD(TD_ESC_QW),KC_SCLN, KC_COMM, KC_DOT,  KC_P,    KC_Y,                  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,       KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                  KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      OSM(MOD_LALT), KC_QUOT, KC_Q,    KC_J,    KC_K,    KC_X,                  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                MT(MOD_LSFT, KC_SPC), TL_LOWR, KC_ENT, G(KC_L),       KC_MUTE, KC_BSPC, TL_UPPR, MT(MOD_RCTL, KC_DEL)
                                      //`--------------------------'  `--------------------------'
  ),

  [_QWERTY] = LAYOUT(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 _______, _______,  _______, _______,       _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [_LOWER] = LAYOUT(                                  //nav + mouse
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, C(KC_Z), KC_UP,   C(KC_Y), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                       XXXXXXX, KC_RSFT, XXXXXXX, KC_RWIN, MS_WHLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LALT, C(KC_X), C(KC_C), C(KC_V), XXXXXXX,                      XXXXXXX, MS_BTN1, MS_BTN3, MS_BTN2, MS_WHLD, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             _______, _______, _______, _______,     _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [_UPPER] = LAYOUT(                                    //Calculation
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_0,    KC_1,    KC_2,           KC_3,           KC_4,           KC_5,                  KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_GRV,  TD(TD_EXL_QST), TD(TD_AMP_PIP), TD(TD_LPR_LBR), TD(TD_LRC_LBK),        TD(TD_RRC_RBK), TD(TD_RPR_RBR), TD(TD_PLS_MIN), TD(TD_AST_SLH), TD(TD_EQL_UND), XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX,        TD(TD_TIL_CIR), TD(TD_AT_HASH), XXXXXXX,               XXXXXXX,        TD(TD_COM_DOT), TD(TD_DLR_PER), XXXXXXX,        XXXXXXX,        XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                        _______, _______, _______, _______,        _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

[_ADJUST] = LAYOUT(                                     //shortcuts                 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
//|--------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------|--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LCTL, KC_LSFT, KC_LALT,  XXXXXXX,                      XXXXXXX, KC_RALT, KC_RSFT, KC_RCTL, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             _______, _______, _______, _______,        _______, _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_ALPHA]  = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_UP, KC_DOWN)  },
    [_QWERTY] = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(_______, _______)  },
    [_LOWER]  = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(KC_TAB, S(KC_TAB))},
    [_UPPER]  = { ENCODER_CCW_CW(_______, _______),  ENCODER_CCW_CW(XXXXXXX, XXXXXXX)  },
    [_ADJUST] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),  ENCODER_CCW_CW(XXXXXXX, XXXXXXX) }
};
#endif


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _ALPHA:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_0);
        break;
    case _QWERTY:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_1);
        break;
    case _LOWER:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_2);
        break;
    case _UPPER:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_3);
        break;
    case _ADJUST:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_4);
        break;
    default:
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_rgb_layer_0);
        break;
    }
  return state;
}


/*
bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case AUTO_SHIFT_ALPHA:
            return true;
        default:
            return false;
    }
}
*/
/*
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) >= 0) {
        uint8_t layer = get_highest_layer(layer_state);
        if(layer == _ALPHA) {
            rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
            return false;
        } else if(layer == _QWERTY){
            rgb_matrix_mode(RGB_MATRIX_CYCLE_UP_DOWN);
            return false;
        }

for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {                                                          
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                
                uint8_t col_mod = col;
                if (row >= 4) {
                    col_mod = MATRIX_COLS-col-1;
                }
                
                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col_mod,row}) > KC_TRNS) {
                    //rgb_matrix_set_color(index, 0x22, 0x22, 0x00);
                    switch(layer) {
                    case _LOWER:
                        rgb_matrix_set_color(index, 0x00, 0x00, 0x22);
                        break;
                    case _UPPER:
                        rgb_matrix_set_color(index, 0x22, 0x00, 0x00);
                        break;
                    case _ADJUST:
                        rgb_matrix_set_color(index, 0x22, 0x00, 0x22);
                        break;
                    default:
                        break;
                    }
                } else if (index >= led_min && index < led_max && index != NO_LED){
                    rgb_matrix_set_color(index, 0x00, 0x00, 0x00);
                }
                
                //thumbs
                rgb_matrix_set_color(19, 0x22, 0x22, 0x22);
                rgb_matrix_set_color(20, 0x22, 0x22, 0x22);
                rgb_matrix_set_color(21, 0x22, 0x22, 0x22);
                rgb_matrix_set_color(41, 0x22, 0x22, 0x22);
                rgb_matrix_set_color(42, 0x22, 0x22, 0x22);
                rgb_matrix_set_color(43, 0x22, 0x22, 0x22);
            }
        }
    }
    return false;
}
*/