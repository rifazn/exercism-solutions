#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#define COLORS \
	BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE

typedef enum {
	COLORS, TOTAL_COLORS
} resistor_band_t;

unsigned short color_code(resistor_band_t colors[]);
#endif
