#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{
    int boyut;
    puts("dizi boyutunu ve elemanlari giriniz;");
    scanf("%d",&boyut);
    int dizi[boyut];
    for(i=0;i<boyut;i++){
            scanf("%d",&dizi[i]);
    }
    ort_bull(boyut,dizi);
}

int ort_bull(int size , int array[]){
    float toplam=0,ortalama;
    for(i=0;i<size;i++){
        toplam+= array[i];
    }
    //printf("%.2f\n",toplam);
    ortalama= toplam/size;
    printf("%.2f",ortalama);
}

