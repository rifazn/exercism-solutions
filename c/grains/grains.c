#include "grains.h"

const uint8_t SQ_MAX = 64;
const uint8_t SQ_MIN =  0;

uint64_t square(uint8_t index) {
   return (index <= SQ_MIN || index > SQ_MAX) ? 0 : 1ull << (index-1);
}

uint64_t total(void) {
   return UINT64_MAX;
}
