#include <stdio.h>
#include <math.h>
#include "armstrong_numbers.h"

#define MAX_DIGITS 10
#define UNDEFINED -1

static int _pow(int base, int exp) {
   int num = base;
   for (; exp > 1; exp--)
      num *= base;
   return num;
}

bool is_armstrong_number(int candidate) {
   int num, ndigits, sum;

   sum = 0;
   num = candidate;
   ndigits = log10(num) + 1;

   for (; num > 0; num /= 10)
      sum += _pow(num % 10, ndigits);

   return candidate == sum;
}
