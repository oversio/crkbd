/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
// #include <stdio.h>
// #include "action_layer.h"

enum layers {
    _BASE,
    _FIRST,
    _SECOND,
    _THIRD,
    _FOURTH,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LSFT_T(KC_CAPS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_MINS, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, MO(_FIRST),  KC_SPC,      KC_SPC, LT(_SECOND, KC_ENT), KC_LOPT
                                      //`--------------------------'  `--------------------------'

  ),

    [_FIRST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,    KC_7,    KC_8,    KC_9, KC_PAST, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LSFT_T(KC_CAPS), KC_AT, KC_PIPE, KC_AMPR, KC_QUES, KC_CIRC,                      XXXXXXX,    KC_4,    KC_5,    KC_6, KC_SLSH, KC_PPLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_HASH, XXXXXXX,                      XXXXXXX,    KC_1,    KC_2,    KC_3, KC_PERC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_SPC,   MO(_FOURTH), KC_0
                                      //`--------------------------'  `--------------------------'
  ),

    [_SECOND] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LSFT_T(KC_CAPS),XXXXXXX,XXXXXXX, XXXXXXX, KC_LOPT, XXXXXXX,                      KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, MO(_THIRD),  KC_SPC,     KC_SPC, _______, KC_LOPT
                                      //`--------------------------'  `--------------------------'
  ),

    [_THIRD] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_BSLS, KC_EXLM, KC_DQUO, KC_HASH,  KC_DLR, KC_PERC,                      KC_TILD, KC_LPRN, KC_RPRN, KC_PEQL, KC_QUES, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
LSFT_T(KC_CAPS),KC_LABK,KC_PSLS, KC_RABK, KC_SLSH, XXXXXXX,                      XXXXXXX, KC_LBRC, KC_RBRC,  KC_EQL, KC_GRV,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_AMPR, XXXXXXX,                      XXXXXXX, KC_LCBR, KC_RCBR, KC_UNDS, KC_PIPE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_SPC, _______, KC_LOPT
                                      //`--------------------------'  `--------------------------'
  ),

    [_FOURTH] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,                      XXXXXXX, XXXXXXX, KC_VOLU, KC_MPLY, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD,                      XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_SPC, _______, KC_LOPT
                                      //`--------------------------'  `--------------------------'
  )

//     [_FOURTH] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//       QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,                      XXXXXXX, XXXXXXX, KC_VOLU, KC_MPLY, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD,                      XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//       XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                           KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_LOPT
//                                       //`--------------------------'  `--------------------------'
//   )

};

// #ifdef OLED_DRIVER_ENABLE
// oled_rotation_t oled_init_user(led_rotation_t rotation) {
//     if (!is_keyboard_master()) {
//         return OLED_ROTATION_180; // flips the display 180 degrees if offhand
//     }
//     return rotation;
// }

// #define L_BASE 0
// #define L_NUMPAD 2
// #define L_SYMBOLS 4
// #define L_NAVIGATE 8
// #define L_ADJUST 14

// char layer_state_str[24];

// const char *read_layer_state(void) {
//     switch (layer_state)
//     {
//     case L_BASE:
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Base");
//         break;
//     case L_NUMPAD:
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: NumPad");
//         break;
//     case L_SYMBOLS:
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Symbols");
//         break;
//     case L_NAVIGATE:
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Navigate");
//     case L_ADJUST:
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
//         break;
//     default:
// #if defined (LAYER_STATE_32BIT)
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
// #else
//         snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%d", layer_state);
// #endif
//     }

//     return layer_state_str;
// }

// #endif // End of OLED_DRIVER_ENABLE
