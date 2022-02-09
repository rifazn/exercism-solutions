#include <stdio.h>
#include <math.h>
#include "armstrong_numbers.h"

#define MAX_DIGITS 10
#define UNDEFINED -1

int get_sum(int candidate) {
   int i, sum, ndigits, nums[MAX_DIGITS];

   /* initialize `nums` with invalid values to represent an undefined index */
   for (i = 0; i < MAX_DIGITS; i++)
      nums[i] = UNDEFINED;

   /* Get number of digits and separate all digits in `candidate`*/
   for (ndigits = 0; ndigits < 10 && candidate > 0;
         ndigits++, candidate /= 10) {
      nums[ndigits] = candidate % 10;
   }

   sum = 0;
   for (i = 0; i < ndigits; i++)
      sum += (int) pow((double) nums[i], (double) ndigits);

   return sum;
}

bool is_armstrong_number(int candidate) {
   return get_sum(candidate) == candidate;
}
