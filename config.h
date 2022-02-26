#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6090
#define DEVICE_VER      0x0002
#define MANUFACTURER    Zowie
#define PRODUCT         Media Control

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { /*INSERT GPIO PINS HERE*/ }
#define MATRIX_COL_PINS { /*INSERT GPIO PINS HERE*/ }
#define UNUSED_PINS

/* encoder setup */
#define ENCODERS_PAD_A { /*INSERT GPIO PINS HERE*/ }
#define ENCODERS_PAD_B { /*INSERT GPIO PINS HERE*/ }
#define ENCODER_RESOLUTION 1

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* disable music mode */
#define NO_MUSIC_MODE

/* disable multi layers */
#define NO_ACTION_LAYER
