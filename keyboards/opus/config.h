/*
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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x434B
#define PRODUCT_ID      0x4F50
#define DEVICE_VER      0x0001
#define MANUFACTURER    rtwayland
#define PRODUCT         Opus

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* PCB pin-out */
#define MATRIX_ROW_PINS {B1, B3, B2, B6}
#define MATRIX_COL_PINS {D1, D0, D4, C6, D7, E6, B4, B5, F4, F5, F6, F7}
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 200
