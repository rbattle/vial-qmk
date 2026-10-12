/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <https://github.com/Legonut> wrote this file.  As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day, and
 * you think this stuff is worth it, you can buy me a beer in return. David Rauseo
 * ----------------------------------------------------------------------------
 */

#pragma once

// No need for the single versions when multi performance isn't a problem =D
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH

// 20m timeout (20m * 60s * 1000mil)
// #define RGB_MATRIX_TIMEOUT 1200000
#define RGB_MATRIX_SLEEP

// Both halves' LEDs run off one USB port; at full brightness the combined
// draw browns out the split link and the board freezes. Same cap as
// rgbkb/sol's config.h.
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#define RGB_MATRIX_DEFAULT_VAL 80

#define STM32_ONBOARD_EEPROM_SIZE 2048

#undef TOUCH_RESOLUTION
#define TOUCH_RESOLUTION 20 // sensitivity of swipes, lower=faster
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

#define STARTUP_SONG SONG(NO_SOUND)
#define AUDIO_CLICKY_ON false

#define VIAL_KEYBOARD_UID {0x96, 0xA9, 0x55, 0x70, 0x76, 0x04, 0xB0, 0x3F}

// Hold Escape + Enter to unlock Vial security features
#define VIAL_UNLOCK_COMBO_ROWS {0, 2}
#define VIAL_UNLOCK_COMBO_COLS {0, 7}
