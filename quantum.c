#include QMK_KEYBOARD_H

// Runs once when the keyboard initializes.
void keyboard_post_init_kb(void) {
    // Custom code to run once keyboard is ready.
    // Usually not needed for simple keyboards.
    keyboard_post_init_user(); // Calls the user-specific function below
}

// Runs once when the keyboard initializes (user version).
void keyboard_post_init_user(void) {
    // Add your custom initialization code here, if any.
}

// Runs on every matrix scan.
void matrix_scan_kb(void) {
    // Custom code to run on every scan.
    // Usually not needed unless doing advanced features.
    matrix_scan_user(); // Calls the user-specific function below
}

// Runs on every matrix scan (user version).
void matrix_scan_user(void) {
    // Add your custom matrix scan code here, if any.
    // This is where encoder button handling often goes if not in the matrix.
}

// Runs periodically, good for tasks like updating displays.
// void housekeeping_task_user(void) {
// }

// --- Optional: Encoder Handling ---
// #ifdef ENCODER_ENABLE
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) { /* First encoder */
//         if (clockwise) {
//             tap_code16(KC_VOLU);
//         } else {
//             tap_code16(KC_VOLD);
//         }
//     }
//     return true;
// }
// #endif // ENCODER_ENABLE
