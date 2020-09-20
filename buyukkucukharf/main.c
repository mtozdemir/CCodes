#include <stdio.h>
#include <stdlib.h>

void donustur();
char dizioku();

int main()
{   int i;
    char array2[50];
    array2[50]=dizioku();
    printf("%c",array2[0]);
}

void donustur(char b[]){

    char array[50];
    dizioku();
    //printf("%s\n",array);

    int i, j;
    //printf("%c\n",j);
    for(i=65, j=97;i<91, j<122;i++, j++){
            if(i==65){
                i=97;printf("%c",i);
                i++;
            }
        printf("%c",i);
        //printf("%c\t",j);

}
}
char dizioku(){
    char dizi[50];
    puts("dizi giriniz..");
    scanf("%s",dizi);
    //puts(dizi);
    return dizi;
}
