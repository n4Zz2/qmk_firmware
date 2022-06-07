// Copyright 2022 n4Zz2 (@n4Zz2)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#include "config_common.h"

#define DEVICE_VER 0x0001
#define DESCRIPTION A handwired split keyboard inspired by Corne
#define PRODUCT VOID ERGO SLIM

/* Encoder pins */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F6 }

#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F6 }

#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

/* Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN. */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1  // or D1, D2, D3, E6
#define SELECT_SOFT_SERIAL_SPEED 0
#define SPLIT_USB_DETECT

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
