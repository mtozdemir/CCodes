
#include <stdio.h>
#include <stdlib.h>
#define n 9


int main()
{
    printf("Hello world!\n");
    int array[n]={2111,2,3,551,99,6,7,11,1231};
    int i;
    for(i=0;i<n;i++)
        {
            printf("dizinin %d. elemaný :%d \n",i+1,array[i] );
                }/*
   puts("degerleri giriniz :");
   int array2[n],j;
        for(j=0;j<n;j++){
            scanf("%d",&array2[j]);
            }
            for(j=0;j<n;j++){
                printf("%d\n",array2[j]);
            }*/
    //printf("%d",array2[5]);
    int maks=max_found(array,n);
    printf("maksimum = %d",maks);

}
int max_found(int a[], int b){

    int max=a[0],i;
        for(i=0;i<=b;i++){
            if(a[0]<a[i+1]){
                    max=a[i+1];
                }
                    }return max;
}
