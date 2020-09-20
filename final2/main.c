#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j;

 for (i=0;i<12;i++){
 if (i<6) {
    for(j=0; j<i; j++) printf("*"); //for(j=0; j<=i; j++) printf("*");
    printf("\n");
 }else{
 for(j=0; j< (i-6); j++) printf(" "); //for(j=0; j< (10-i); j++) printf(" ");
 for(j=0; j< (12-i); j++) printf("*"); // for(j=0; j< (i-5); j++) printf("*");
 printf("\n");
    }
 }

 return 0;
 }
