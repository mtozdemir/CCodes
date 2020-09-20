#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
    for(j=1;j<=b;j++){
            int sayi1=0;
        for(i=1;i<j;i++){
            if(j%i==0){
                sayi1+=i;
            }
        }
                if(sayi1==j) {
                        printf("%d",j);}
        //if(sayi1==j) printf("%d",sayi1);
    }
}
