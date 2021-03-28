/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL
// #define MK_C_OFFSET_UNMOD 16

#define MOUSEKEY_DELAY 0 // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 0 // Time between cursor movements
#define MOUSEKEY_MAX_SPEED 3 // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 50 // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY 0 // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL 50 // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED 50 // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX 255 // Time until maximum scroll speed is reached

#define TAPPING_TERM 0
#define TAPPING_FORCE_HOLD
#define RETRO_TAPPING
