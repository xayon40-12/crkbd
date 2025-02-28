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
#include <stdio.h>

#define MT_A_X MT(MOD_LALT,KC_X)
#define MT_C_C MT(MOD_LCTL,KC_C)
#define MT_G_V MT(MOD_LGUI,KC_V)
#define MT_G_M MT(MOD_LGUI,KC_M)
#define MT_C_CO MT(MOD_LCTL,KC_COMM)
#define MT_A_DO MT(MOD_LALT,KC_DOT)
#define MT_RS_EN MT(MOD_RSFT,KC_ENT)
#define MT_LS_SP MT(MOD_LSFT,KC_SPC)

#define WH_UP KC_MS_WH_UP
#define WH_DOWN KC_MS_WH_DOWN
#define WH_LEFT KC_MS_WH_LEFT
#define WH_RGHT KC_MS_WH_RIGHT
#define MS_UP KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_LEFT KC_MS_LEFT
#define MS_RGHT KC_MS_RIGHT
#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_BTN3 KC_MS_BTN3
#define MS_BTN4 KC_MS_BTN4
#define MS_BTN5 KC_MS_BTN5

#define LT2_TAB LT(2, KC_TAB)
#define LT1_ESC LT(1, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,  MT_A_X,  MT_C_C,  MT_G_V,    KC_B,                         KC_N,  MT_G_M, MT_C_CO, MT_A_DO, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, LT1_ESC,MT_LS_SP,   MT_RS_EN, LT2_TAB, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      // XXXXXXX, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS,                      KC_PIPE, KC_RCBR, KC_LCBR, KC_UNDS, KC_PLUS, XXXXXXX,
      XXXXXXX, KC_LCBR, KC_RCBR, KC_PIPE, KC_UNDS, KC_PLUS,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    KC_BSPC,   MO(3), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_HOME,   KC_UP,  KC_END, KC_PGUP, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV, KC_TILD, KC_QUOT, KC_DQUO, XXXXXXX,                      XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PSCR, KC_SLCT,  KC_INS,  KC_DEL, KC_HOME,                      KC_PAUS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   MO(3), XXXXXXX,    XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                         WH_UP, WH_LEFT,   MS_UP, WH_RGHT, XXXXXXX, XXXXXXX,
  //|--------+-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                       WH_DOWN, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX,
  //|--------+-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F9,  KC_F10,  KC_F11,  KC_F12, RGB_TOG,                       MS_BTN4, MS_BTN1, MS_BTN2, MS_BTN3, MS_BTN5, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};
// RGB_SAI, RGB_HUI, RGB_VAI, RGB_SAD, RGB_HUD, RGB_VAD, RGB_TOG,
