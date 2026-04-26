CONVERT_TO = rp2040_ce

# This build has no installed per-key, backlight, or underglow LEDs. The parent
# Charybdis 3x5 metadata enables RGB Matrix for stock builds, so override it
# here until RGB LEDs are installed on this hardware.
RGB_MATRIX_ENABLE = no
