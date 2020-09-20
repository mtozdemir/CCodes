#include <stdio.h>
#include <stdlib.h>

struct lig {

    char takma;
    char isim;


}takim[26];

int main()
{
    //int i,j=0;
    printf("Hello world!\n");
       /* i=65;
        takim[0].takma=i;
        while(j<26){

                takim[j].takma=i;
            printf("%c\n",takim[j].takma);
        i++;j++;
        }*/
    tkma_ism();
}

void tkma_ism(){
    int i,j=0;
    i=65;
        takim[0].takma=i;
        while(j<26){

                takim[j].takma=i;
            printf("%c\n",takim[j].takma);
        i++;j++;
        }


}

