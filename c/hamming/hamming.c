#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
   /* If boths string empty */
   if (!(*lhs | *rhs))
      return 0;

   int count;
   for (count = 0; *lhs && *rhs; lhs++, rhs++) {
      if (*lhs != *rhs)
         count++;
   }

   /* Considering the above loop ends if atleast one string or both string is null
    * return -1 if either of them is not null at this point */
   if (*lhs | *rhs)
      return -1;

   return count;
}
