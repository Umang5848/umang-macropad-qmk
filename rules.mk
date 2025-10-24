# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes # Needed for Volume/Media keys
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

# Enable VIAL specific features
VIAL_ENABLE = yes
VIAL_INSECURE = yes # Allows VIAL app to connect without official approval

# Link Time Optimization (saves space)
LTO_ENABLE = yes

# Define where QMK should find the C source files (we'll create these later if needed)
SRC = matrix.c quantum.c

# Tells QMK the layout name we'll use in keymap.c and info.json
LAYOUTS = LAYOUT
