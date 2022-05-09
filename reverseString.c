#include "stdio.h"
#include "string.h"

void reverseStr(char *str, int n)
{
   int i = 0;
   char temp;

   for (i = 0; i < (n/2); i++)
   {
      temp = str[i];
      str[i] = str[(n-1)-i];
      str[(n-1)-i] = temp;
   }
   return;
}

int main()
{
   char str[] = "reverse";
   int size = strlen(str);
   reverseStr(str, size);
   printf("%s\n", str);
   return 0;
}

Output: esrever
