#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x4F4B
#define DEVICE_VER 0x0001
#define MANUFACTURE Otonokizaka Keyboard
#define PRODUCT Otonokizaka LoveLive9
#define DESCRIPTION Otonokizaka Keyboard LoveLive9

#define MATRIX_ROWS 1
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS { NO_PIN }
#define MATRIX_COL_PINS { B4, B6, B2, D7, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION COL2ROW

#define UNUSED_PINS

#define TAPPING_TERM 200

#endif
