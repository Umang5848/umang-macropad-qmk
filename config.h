#pragma once

#include "quantum.h"

// --- Basic Device Info ---
// Replace with your info later, especially for commercial use
#define VENDOR_ID       0xFEED // Temporary ID
#define PRODUCT_ID      0x0001 // Temporary ID
#define DEVICE_VER      0x0001
#define MANUFACTURER    Umang
#define PRODUCT         Umang_Macropad

// --- Matrix Definition ---
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

// --- QMK Pin Names for your Pico GPIOs ---
// !! IMPORTANT !! You MUST replace these placeholders later!
// Search "QMK RP2040 pin names" to find the mapping.
// Example: If GP10 is B1 in QMK, GP11 is B2, etc.
#define MATRIX_ROW_PINS { B1, B2 } // Placeholder for GP10, GP11
#define MATRIX_COL_PINS { B3, B4, C0, C1 } // Placeholder for GP12, GP13, GP14, GP15

// --- Diode Direction ---
#define DIODE_DIRECTION COL2ROW // Matches your hardware

// --- VIAL Configuration ---
// Generate a unique ID using uuidgen or an online generator later
#define VIAL_KEYBOARD_UID {0xA0, 0xB1, 0xC2, 0xD3, 0xE4, 0xF5, 0x00, 0x01} // Placeholder UID
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 } // Press top-left and top-right key to unlock VIAL
#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }

// --- Optional: Encoder Pins ---
// We will uncomment and configure these AFTER the basic build works
// #define ENCODERS_PAD_A { C2 } // Placeholder for QMK name of GP18 (CLK)
// #define ENCODERS_PAD_B { C3 } // Placeholder for QMK name of GP17 (DT)
// #define ENCODER_RESOLUTION 2  // You confirmed divisor=2 worked in KMK

// --- Optional: Encoder Push Button as part of the matrix ---
// If you want the encoder button to be just another key in VIAL:
// 1. Add GP16's QMK pin name to either MATRIX_ROW_PINS or MATRIX_COL_PINS above.
// 2. Increase MATRIX_ROWS or MATRIX_COLS by 1.
// 3. Adjust the layout in info.json and keymap.c accordingly.
// OR, handle the button press separately using encoder_update_user in keymap.c later.
