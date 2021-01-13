#ifndef EFM8UB3_THUNDERBOARD_H
#define EFM8UB3_THUNDERBOARD_H

#include "efm8ub3.h"
#include "efm8ub3-registers.h"

// Push button states.
#define THB_PB_PRESSED 0
#define THB_PB_UNPRESSED 1

// LED states.
#define THB_LED_ON 0
#define THB_LED_OFF 1


// I/O definitions.

// Push button 0
#define THB_PB0 P0_B2

// Push button 1
#define THB_PB1 P0_B3

// Green LED
#define THB_LED_G P1_B4

// Blue LED
#define THB_LED_B P1_B5

// Red LED
#define THB_LED_R P1_B6


// LED GPIO direction control
#define THB_LED_P1MDOUT (P1MDOUT_B4__PUSH_PULL | P1MDOUT_B5__PUSH_PULL | P1MDOUT_B6__PUSH_PULL)

// LED GPIO skip control
#define THB_LED_P1SKIP (P1SKIP_B4__SKIPPED | P1SKIP_B5__SKIPPED | P1SKIP_B6__SKIPPED)

#endif
