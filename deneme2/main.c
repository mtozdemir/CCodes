#include <stdio.h>
#include <stdlib.h>
int asal_sayi(int);
int main()
{
    int sayi;
    //printf("Hello world!\n");
    puts("bir sayi giriniz :");
    scanf("%d",&sayi);
    asal_sayi(sayi);
}
int asal_sayi(int a)
{
    int i,j;int dizi[100];
    for(j=2;j<=a;j++) {
            int b=0;
        for(i=2;i<=j;i++){
            if(j%i==0){
                b++;
                }
            }
            if(b<2){
                    printf("%d\n",j);
            }


}
}







