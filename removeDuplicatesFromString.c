void removeDups(char *str)
{
   int hash[MAX_CHARS] = {0};
   int i = 0;
   int res_index = 0;

   while (*(str+i))
   {
      if (hash[*(str+i)] == 0)
      {
         hash[*(str+i)] = 1;
         str[res_index] = str[i];
         res_index++;
      }
      i++;
   }

   /* After above step string is stringiittg.
     Removing extra iittg after string*/
   str[res_index] = '\0';

   return;
}

int main()
{
   char str[] = "hellowelcomehellowelcomeok";
   removeDups(str);
   printf("%s\n", str);
   return 0;
}

Output: helowcmk
