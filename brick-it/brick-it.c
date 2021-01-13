#include "thunderboard.h"

static void pause(void);
static void init_mcu(void);

int main(void) {
  init_mcu();

  while (1) {
    THB_LED_B = 0;
    pause();
    THB_LED_B = 1;
    pause();
  }
}

static void init_mcu(void) {
  WDTCN = 0xDE;
  WDTCN = 0xAD;

  P1MDOUT = THB_LED_P1MDOUT;
  P1SKIP = THB_LED_P1SKIP;
  XBR2 = XBR2_XBARE__ENABLED;

  // Select 24.5 MHz HFOSC0 oscillator divided by 1.
  CLKSEL = CLKSEL_CLKSL__HFOSC0;
  while ((CLKSEL & CLKSEL_DIVRDY__BMASK) != CLKSEL_DIVRDY__READY) { }

  PFE0CN = PFE0CN_FLRT__SYSCLK_BELOW_50_MHZ;

  // Select 48 MHz HFOSC1 oscillator divided by 1.
  CLKSEL = CLKSEL_CLKSL__HFOSC1;
  while ((CLKSEL & CLKSEL_DIVRDY__BMASK) != CLKSEL_DIVRDY__READY) { }
}

static void pause(void) {
  long i, j;
  for (i = 0; i < 65536; ++i) {
    for (j = 0; j < 10; ++j) {
      ;
    }
  }
}
