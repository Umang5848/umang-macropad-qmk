#pragma once

#include "quantum.h"

// --- Basic Device Info ---
#define VENDOR_ID       0xFEED // Temporary ID
#define PRODUCT_ID      0x0001 // Temporary ID
#define DEVICE_VER      0x0001
#define MANUFACTURER    Umang
#define PRODUCT         Umang_Macropad

// --- Matrix Definition (Now 2x5 to include encoder button) ---
#define MATRIX_ROWS 2
#define MATRIX_COLS 5 // Increased to 5

// --- QMK Pin Names for your Pico GPIOs ---
#define MATRIX_ROW_PINS { B1, B2 } // GP10, GP11
#define MATRIX_COL_PINS { B3, B4, C0, C1, C2 } // GP12, GP13, GP14, GP15, GP16 (Encoder Button)

// --- Diode Direction ---
#define DIODE_DIRECTION COL2ROW // Matches your hardware

// --- VIAL Configuration ---
// Generate a unique ID later using `uuidgen` in linux terminal or an online generator
#define VIAL_KEYBOARD_UID {0xA0, 0xB1, 0xC2, 0xD3, 0xE4, 0xF5, 0x00, 0x01} // Placeholder UID
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 } // Press top-left (R1C1) and the encoder button (R1C5)
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 } // Column indices 0 and 4

// --- Encoder Configuration ---
#define ENCODER_ENABLE          // Enable encoder support
#define ENCODERS_PAD_A { C4 }   // QMK name for GP18 (CLK)
#define ENCODERS_PAD_B { C3 }   // QMK name for GP17 (DT)
#define ENCODER_RESOLUTION 2    // Pulses per detent (matches KMK setting)

// --- Optional: Debounce settings ---
// #define DEBOUNCE 5 // Debounce time in ms
