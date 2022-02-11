#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "isogram.h"

bool is_isogram(const char phrase[]) {
   if (phrase == NULL)
      return false;

   bool alphabets[26];

   int i;
   for (i = 0; i < 26; i++)
      alphabets[i] = false;

   for (i = 0; phrase[i] != '\0'; i++) {
      if (!isalpha(phrase[i]))
         continue;

      int idx = tolower(phrase[i]) - 'a';

      if (alphabets[idx] == true)
         return false;

      alphabets[idx] = true;
   }

   return true;
}
