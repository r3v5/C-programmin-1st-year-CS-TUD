#include <stdio.h>
#include <string.h>


int main()
{
   char name[10];
   char one_symbol;

   // printf("Enter character\n");
   // scanf("%c", &one_symbol);
   // printf("%c", one_symbol);

   // if (one_symbol == 'r')
   // {
   //    printf("\nHi, Reus!\n");
   // }
   // else
   // {
   //    printf("\nYou aren't Marco Reus\n");
   // }

   printf("Enter character: ");
   fgets(name, 10, stdin);
   name[strcspn(name, "\n")] = '\0';
   if (strcmp(name, "Marco") == 0)
   {
      printf("\nHi, Reus!\n");
   }
   else
   {
      printf("\nYou aren't Marco Reus\n");
   }

   return 0;
}
