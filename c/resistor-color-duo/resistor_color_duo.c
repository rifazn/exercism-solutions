#include "resistor_color_duo.h"

unsigned short color_code(resistor_band_t colors[]) {
   return colors[0] * 10 + colors[1];
}
