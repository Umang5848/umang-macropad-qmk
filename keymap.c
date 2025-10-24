#include QMK_KEYBOARD_H

// Define the LAYOUT macro matching info.json
#define LAYOUT( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13 \
) { \
    { k00, k01, k02, k03 }, \
    { k10, k11, k12, k13 } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: Default layer
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,    // Row 1
        KC_E,    KC_F,    KC_G,    KC_H     // Row 2
    )
    // Add more layers here if needed, like:
    // , [1] = LAYOUT( KC_1, KC_2, ... )
};

// --- Optional: Encoder Handling ---
// We will uncomment and configure this later
// #ifdef ENCODER_ENABLE
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) { // First encoder
//         if (clockwise) {
//             tap_code16(KC_VOLU); // Use tap_code16 for media keys
//         } else {
//             tap_code16(KC_VOLD); // Use tap_code16 for media keys
//         }
//     }
//     return true; // Return true if handled
// }
// #endif // ENCODER_ENABLE

// --- Optional: Encoder Button Handling (if not in matrix) ---
// If you defined the encoder button pin in config.h but didn't put it in the matrix:
// void matrix_scan_user(void) {
//   static bool encoder_button_pressed = false;
//   bool current_encoder_button_state = readPin(ENCODER_BUTTON_PIN); // Replace with QMK pin name for GP16
//
//   if (!current_encoder_button_state && !encoder_button_pressed) {
//     // Button just pressed
//     tap_code16(KC_MUTE); // Send Mute keycode
//     encoder_button_pressed = true;
//   } else if (current_encoder_button_state && encoder_button_pressed) {
//     // Button just released
//     encoder_button_pressed = false;
//   }
// }
