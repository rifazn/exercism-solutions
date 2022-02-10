#include "resistor_color.h"

resistor_band_t color_code(resistor_band_t color) {
   return color;
}

resistor_band_t* colors() {
   static resistor_band_t bands[TOTAL_COLORS];

   /* if bands was initialized before, just return it 
    * important to note, DO NOT check with the 0th index
    * as the 0th index WILL be init to 0 by the compiler
    * more often than not.
    * */
   if (bands[9] == WHITE)
      return bands;

   /* populate the array with all colors */
   resistor_band_t color;
   for (color = BLACK; color < TOTAL_COLORS; color++)
      bands[color] = color;

   return bands;
}
