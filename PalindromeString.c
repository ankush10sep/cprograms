#include "stdio.h"
#include "string.h"

int isPalindrome(char *str, int n)
{
   int i = 0;
   char temp;

   for (i = 0; i < (n/2); i++)
   {
      if (str[i] != str[(n-1)-i])
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   char str[] = "abcbb";
   int size = strlen(str);
   int ret = isPalindrome(str, size);
   printf("String %s palindrome\n", (ret ? "is":"is not"));
   return 0;
}

Output: String is palindrome
