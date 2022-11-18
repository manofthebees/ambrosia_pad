// Copyright 2022 Jibran Syed (@manofbees)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    beeman
#define PRODUCT         ambrosia_pad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B6, B12, B8, B7 }  
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4 }

//encoder pins
#define ENCODERS_PAD_A { A3, A7 }
#define ENCODERS_PAD_B { A1, A5 }
#define ENCODER_RESOLUTION 4

#define DIODE_DIRECTION COL2ROW
