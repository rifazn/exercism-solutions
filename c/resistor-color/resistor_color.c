#include "resistor_color.h"
#include <stdio.h>
#include <stdlib.h>

int c[] = {
   BLACK, BROWN, RED, ORANGE, YELLOW,
   GREEN, BLUE, VIOLET, GREY, WHITE
};

int color_code(resistor_band_t color) {
   return color;
}

int* colors() {
   return c;
}
