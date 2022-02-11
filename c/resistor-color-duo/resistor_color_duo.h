#include <stdint.h>
#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

typedef enum {
	BLACK, BROWN, RED, ORANGE, YELLOW,
	GREEN, BLUE, VIOLET, GREY, WHITE
} resistor_band_t;

uint16_t color_code(resistor_band_t colors[static 2]);
#endif
