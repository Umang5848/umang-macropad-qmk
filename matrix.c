#include QMK_KEYBOARD_H

// Runs the matrix scan. You generally don't need to modify this
// for simple matrices unless doing something advanced.
bool matrix_scan_kb(void) {
    return matrix_scan();
}
