 /*
 Copyright 2020 Garret Gartner

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

#define VIAL_KEYBOARD_UID {0x4C, 0xD0, 0x3A, 0x1B, 0xFE, 0x41, 0xEA, 0x5A}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#ifdef RGBLIGHT_ENABLE
    /* ws2812 RGB LED */
    #define RGB_DI_PIN E6
    #define RGBLED_NUM 1   // Number of LEDs

    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LIMIT_VAL 100
/*  #define RGBLIGHT_HUE_STEP 6
*   #define RGBLIGHT_SAT_STEP 4
*   #define RGBLIGHT_VAL_STEP 4
*/
#endif
