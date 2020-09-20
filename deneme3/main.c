#include <stdio.h>
#include <stdlib.h>

int main()
{
    int deger;
    printf("Hello world!\n");
    puts("bir deger giriniz");
    scanf("%d",&deger);
   // mikemmel_sayi(deger);
    mukemmel_bul(deger);
}

int mikemmel_sayi(int a){

    int i,sayi=0;
    for(i=1;i<a;i++){
        if(a%i==0){
            sayi+=i;
        }
    } if(sayi!=a) printf("tam bolen toplami= %d\t-- sayi mikkemel degil\n",sayi);
    else if(sayi==a) printf("sayi mikkemmel bro\n");
}

int mukemmel_bul(int b){
    int i,j;
    for(j=1;j<=b;j++){
            int sayi1=0;
        for(i=1;i<j;i++){
            if(j%i==0){
                sayi1+=i;
            }
        }
                if(sayi1==j) {
                        printf("%d\n",j);}
    }

}
