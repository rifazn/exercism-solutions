#include "grains.h"

uint64_t square(uint8_t index) {
   if (index <= _SQ_MIN || index > _SQ_MAX)
      return 0;
   return 1ull << (index-1);
}

uint64_t total(void) {
   return UINT64_MAX;
}
