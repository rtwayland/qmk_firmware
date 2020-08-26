/* Copyright 2019 Raleigh Wayland
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      LT(4,KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, LGUI(KC_V), LGUI(KC_Z), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL,
      LCTL_T(KC_ESC), KC_A, KC_S, KC_D, LT(2,KC_F), KC_G, LGUI(KC_C), LGUI(KC_SPC), KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(4,KC_QUOT),
      KC_LALT, LGUI_T(KC_Z), KC_X, KC_C, KC_V, KC_B, LGUI(KC_TAB), LGUI(KC_GRV), KC_N, KC_M, KC_COMM, KC_DOT, LGUI_T(KC_SLSH), KC_ENT,
      KC_F14, KC_F15, KC_DEL, MO(5), MO(3), KC_LSFT, LT(1,KC_SPC), KC_BSPC, KC_LBRC, KC_RBRC, KC_MPLY, KC_F6
     ),
  [1] = LAYOUT(
      LCTL(KC_C), KC_TILD, KC_AT, KC_LCBR, KC_RCBR, KC_HASH, KC_NO, KC_NO, KC_ASTR, KC_CIRC, KC_AMPR, KC_PIPE, KC_BSLS, LCTL(KC_GRV),
      KC_LCTL, KC_GRV, KC_MINS, KC_LPRN, KC_RPRN, KC_EXLM, KC_NO, KC_NO, KC_QUES, KC_DLR, KC_LT, KC_GT, KC_SLSH, KC_DQUO,
      KC_LALT, KC_LGUI, KC_UNDS, KC_LBRC, KC_RBRC, KC_PLUS, LGUI(KC_TAB), LGUI(KC_GRV), KC_P0, KC_EQL, KC_PERC, KC_COLN, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
     ),
  [2] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ASTR, KC_7, KC_8, KC_9, KC_SLSH, KC_EQL,
      KC_LCTL, KC_NO, KC_NO, MO(6), KC_TRNS, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_4, KC_5, KC_6, KC_MINS, KC_PERC,
      KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_TAB), LGUI(KC_GRV), KC_0, KC_1, KC_2, KC_3, KC_DOT, KC_PENT,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(7), KC_SPC, KC_BSPC, KC_LPRN, KC_RPRN, KC_NO, KC_NO
     ),
  [3] = LAYOUT(
      KC_NO, KC_NO, LALT(KC_RGHT), SGUI(KC_LBRC), SGUI(KC_RBRC), KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_LEFT), LGUI(KC_TAB), LGUI(KC_GRV), KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_SPC, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO
     ),
  [4] = LAYOUT(
      KC_TRNS, SGUI(KC_5), SGUI(KC_3), SGUI(KC_4), MEH(KC_4), KC_VOLU, KC_NO, KC_NO, LCTL(LGUI(KC_LEFT)), LCAG(KC_LEFT), LCAG(KC_RGHT), LCTL(LGUI(KC_RIGHT)), MEH(KC_RGHT), LALT(LGUI(KC_POWER)),
      KC_CAPS, KC_F11, KC_MPRV, KC_MNXT, LALT(LGUI(KC_F)), KC_VOLD, KC_NO, KC_NO, LALT(LGUI(KC_LEFT)), LALT(LGUI(KC_DOWN)), LALT(LGUI(KC_UP)), LALT(LGUI(KC_RIGHT)), MEH(KC_LEFT), KC_TRNS,
      KC_NO, KC_F5, KC_NO, LALT(LGUI(KC_C)), LGUI(KC_GRV), KC_MUTE, LGUI(KC_TAB), LGUI(KC_GRV), LCTL(LGUI(LSFT(KC_LEFT))), LCA(KC_LEFT), LCA(KC_RGHT), LCTL(LGUI(LSFT(KC_RIGHT))), KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), MEH(KC_RGHT), MEH(KC_LEFT), KC_NO, KC_NO, KC_NO, RESET
     ),
  [5] = LAYOUT(
      KC_NO, KC_NO, KC_NO, SGUI(KC_LBRC), SGUI(KC_RBRC), KC_NO, KC_NO, KC_NO, KC_HOME, KC_WH_U, KC_WH_D, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_ACL2, KC_WWW_BACK, KC_ACL0, KC_WWW_FORWARD, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_TAB), LGUI(KC_GRV), KC_END, KC_WH_R, KC_WH_L, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO
     ),
  [6] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_F17, KC_F20,
      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_F16, KC_F19,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_TAB), LGUI(KC_GRV), KC_F10, KC_F1, KC_F2, KC_F3, KC_F13, KC_F18,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
     ),
  [7] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAST, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_PEQL,
      KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PERC,
      KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_PENT,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO
     )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
