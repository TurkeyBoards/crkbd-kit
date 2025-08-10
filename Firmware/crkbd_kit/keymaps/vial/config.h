 /*
Turkeyyboards CRKBD Vial Firmware
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x3F, 0x9E, 0x08, 0x3C, 0x15, 0x39, 0x63, 0x7D}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
#define SPLIT_USB_DETECT

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define RGB_DISABLE_WHEN_USB_SUSPENDED     // turn off effects when suspended