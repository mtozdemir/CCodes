#include <stdio.h>

int compare_strings(char [], char []);
char a[1000], b[1000];

int main()
{
    while(1){
       compare_strings(a, b);
       }
}

int compare_strings(char a[], char b[])
{
   printf("String girin\n");
   gets(a);

   printf("String girin\n");
   gets(b);

   int c = 0;

   while (a[c] == b[c]) {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }

   if (a[c] == '\0' && b[c] == '\0')
      printf("Esit stringler girildi.\n");
   else
      printf("Esit olmayan stringler girildi.\n");
}
