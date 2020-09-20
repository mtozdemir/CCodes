#include <stdio.h>
#include <stdlib.h>

int main()
{
    basamak_toplam();
}
void basamak_toplam(char s[]){ //
    char b[100];
    gets(b);
    int size=b[0]-'0';// ilk karakter sayinin kac basamaktan olustugunu gosterýyor. '5'12345 gibi.
    int a=0,i=1,maks=0,gecici;
   while(i<=size){
         a+= b[i]-'0';
        i++;
   }printf("%d\n",a);
    if(b[i+1]-'0'>b[i]-'0'){
              gecici = b[i]-'0';
              b[i]-'0' = b[i+1]-'0';
                b[i+1]-'0' = gecici;
                }printf("%d",b);

   }

