// Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/*
 * Persist handedness per half so physical left/right stay stable even when USB
 * is plugged into the opposite side.
 */
#define EE_HANDS

/* Left-half encoder reuses the former trackball SCLK + MISO lines. */
#define ENCODER_A_PINS { B1 }
#define ENCODER_B_PINS { B3 }
#define ENCODER_A_PINS_RIGHT { }
#define ENCODER_B_PINS_RIGHT { }

#define POINTING_DEVICE_CS_PIN F0
