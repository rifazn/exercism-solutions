#include <stdlib.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) {
   if (phrase == NULL)
      return false;

   bool alphabets[26] = {false};
   int c, idx;

   while ((c = *phrase++) != '\0') {

      if (c >= 'a' && c <= 'z')
         idx = c - 'a';
      else if (c >= 'A' && c <= 'Z')
         idx = c - 'A';
      else
         continue;


      if (alphabets[idx] == true)
         return false;

      alphabets[idx] = true;
   }

   return true;
}
