/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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
#pragma once

/* Trackball angle adjustment. */
// Undefine the default sensor rotation angle from the core keyboard config
//#undef ROTATIONAL_TRANSFORM_ANGLE
// Define your custom orientation angle (e.g., 5 degrees)
//#define ROTATIONAL_TRANSFORM_ANGLE 5

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 7
#endif // VIA_ENABLE

#ifndef __arm__
/* Disable unused features. */
#    define NO_ACTION_ONESHOT
#endif // __arm__

/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE

/* Tapping term */
#define TAPPING_TERM 300
#define TAPPING_TERM_PER_KEY
#define DYNAMIC_TAPPING_TERM_INCREMENT 10
#define PERMISSIVE_HOLD

/*RGB*/
#define LED_DPI_INDICATOR_INDEX 0
/* Bypass bug in bstiq beta */
#define RGBLIGHT_LED_COUNT RGB_MATRIX_LED_COUNT

// Indicate the mouse layer
#undef AUTO_MOUSE_DEFAULT_LAYER
#define AUTO_MOUSE_DEFAULT_LAYER 4

#define BK_POINTING_DEVICE_DRAGSCROLL_REVERSE_Y // inverts vertical scrolling
// Optimized for ThinkPad T14 Ryzen 7 cold boot
#define SPLIT_USB_TIMEOUT 5000
