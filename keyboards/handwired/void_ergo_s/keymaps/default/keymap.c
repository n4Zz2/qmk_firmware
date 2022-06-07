#include QMK_KEYBOARD_H
#include "print.h"

enum layer_names {
  _QWERTY,
  _RAISE,
  _LOWER,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* OWERTY
 * |-----------------------------------------------------.                    .-----------------------------------------------------|
 * |  TAB       Q        W        E        R        T                             Y        U        I        O        P       BSPC  |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |  LSFT      A        S        D        F        G                             H        J        K        L       SCLN     QUOT  |
 * |--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
 * |  LCTL      Z        X        C        V        B       PLAY  |     MUTE      N        M       COMM     DOT      SLSH     RSFT  |
 * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
 *                               LALT     LGUI    LOWER     SPC   |  |  ENT     RAISE     RGUI     RCTL
 *                            |--------|--------------------------|  |--------------------------|--------|
 */
    [_QWERTY] = LAYOUT_void_ergo_s(
        KC_TAB,     KC_Q,     KC_W,     KC_E,       KC_R,     KC_T,                     KC_Y,       KC_U,     KC_I,       KC_O,     KC_P,     KC_BSPC,
        KC_LSFT,    KC_A,     KC_S,     KC_D,       KC_F,     KC_G,                     KC_H,       KC_J,     KC_K,       KC_L,     KC_SCLN,  KC_QUOT,
        KC_LCTL,    KC_Z,     KC_X,     KC_C,       KC_V,     KC_B,                     KC_N,       KC_M,     KC_COMM,    KC_DOT,   KC_SLSH,  KC_RSFT,
                    KC_LALT,  KC_LGUI,  MO(_LOWER), KC_SPC,   KC_MPLY,                  KC_MUTE,    KC_ENT,   MO(_RAISE), KC_RGUI,  KC_RCTL
    ),

/* LOWER
 * |-----------------------------------------------------.                    .-----------------------------------------------------|
 * |  ESC       !        @        #        $        %                             ^        &        *        (        )       BSPC  |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |                                                                                       UP                                       |
 * |--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
 * |                                                                             LEFT     DOWN     RIGHT                                    |
 * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
 *                                                 LOWER          |  |           RAISE    RALT           |
 *                            |--------|--------------------------|  |--------------------------|--------|
 */

    [_LOWER] = LAYOUT_void_ergo_s(
        KC_ESC,     KC_EXLM,  KC_AT,    KC_HASH,    KC_DLR,   KC_PERC,                  KC_CIRC,    KC_AMPR,     KC_ASTR,    KC_LPRN,  KC_RPRN,  KC_BSPC,
        KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_UP,       KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_LEFT,    KC_DOWN,     KC_RIGHT,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                    KC_TRNS,  KC_TRNS,  MO(_LOWER), KC_TRNS,  KC_TRNS,                  KC_LEFT,    KC_DOWN,     MO(_RAISE), KC_RALT,  KC_TRNS
    ),

/* RAISE
 * |-----------------------------------------------------.                    .-----------------------------------------------------|
 * |  ESC       1        2        3        4        5                             6        7        8        9        0       BSPC  |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |                                                                              -        =        {         }       |        `    |
 * |--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
 * |                                                                              _        +        [         ]       \        ~    |
 * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
 *                                                 LOWER          |  |           RAISE    RALT           |
 *                            |--------|--------------------------|  |--------------------------|--------|
 */

    [_RAISE] = LAYOUT_void_ergo_s(
        KC_ESC,     KC_1,     KC_2,     KC_3,       KC_4,     KC_5,                     KC_6,       KC_7,     KC_8,       KC_9,     KC_0,     KC_BSPC,
        KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_MINS,    KC_EQL,   KC_LCBR,    KC_RCBR,  KC_PIPE,  KC_GRV,
        KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_UNDS,    KC_PLUS,  KC_LBRC,    KC_RBRC,  KC_BSLS,  KC_TILD,
                    KC_TRNS,  KC_TRNS,  MO(_LOWER), KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,   MO(_RAISE), KC_RALT,  KC_TRNS
    ),

/* ADJUST
 * |-----------------------------------------------------.                    .-----------------------------------------------------|
 * |            F1       F2       F3       F4       F5                                     7        8         9               DEL   |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |            F6       F7       F8       F9       F10                                    4        5         6               VOLU  |
 * |--------+--------+--------+--------+--------+--------|--------|  |--------|--------+--------+--------+--------+--------+--------|
 * |            F11      F12                                RESET      RESET               1        2         3       .       VOLD  |
 * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
 *                                                 LOWER          |  |           RAISE    RALT      0    |
 *                            |--------|--------------------------|  |--------------------------|--------|
 */

    [_ADJUST] = LAYOUT_void_ergo_s(
        KC_TRNS,    KC_F1,    KC_F2,    KC_F3,      KC_F4,    KC_F5,                    KC_TRNS,    KC_7,     KC_8,    KC_9,    KC_TRNS,   KC_DEL,
        KC_TRNS,    KC_F6,    KC_F7,    KC_F8,      KC_F9,    KC_F10,                   KC_TRNS,    KC_4,     KC_5,    KC_6,    KC_TRNS,   KC_VOLU,
        KC_TRNS,    KC_F11,   KC_F12,   KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_1,     KC_2,    KC_3,    KC_DOT,    KC_VOLD,
                    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS, KC_RALT, KC_0
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

/*
 * ROTARY ENCODER
 */

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (IS_LAYER_ON(_LOWER)) {
      if (clockwise) {
        tap_code(KC_UP);
      } else {
        tap_code(KC_DOWN);
      }
    } else {
      if (clockwise) {
        tap_code(KC_PGUP);
      } else {
        tap_code(KC_PGDN);
      }
    }
  }
  else if (index == 1) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        tap_code(KC_RIGHT);
      } else {
        tap_code(KC_LEFT);
      }
    } else {
      if (clockwise) {
        tap_code(KC_VOLU);
      } else {
        tap_code(KC_VOLD);
      }
    }
  }
  return false;
}
