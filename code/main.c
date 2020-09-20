#include <stdio.h>
#include <stdlib.h>

struct leag{
    char takma;
    int atilan_gol;
    int galibiyet;
}takim1[2];


int main(){   // A 4 B 3
    takim1[0].takma='A';
    takim1[1].takma='S';
    takim1[0].atilan_gol=0;
    takim1[1].atilan_gol=0;

    char array[6],*p,q;
    int i;
    puts("elemanlari gir:::");
    gets(array);

    printf("%d\n",takim1[0].atilan_gol);
    printf("%d\n",takim1[1].atilan_gol);
    printf("%c %c\n",array[2],array[6]);

    int w,j;
    int v=0,z=0;
    w = array[2] - '0';
    q = array[6] - '0';
    printf("w= %d\t",w);
    printf("q= %d\n",q);
    for(i=0; i<2 ;i++ ){
        if(takim1[i].takma==array[0]){
                z=i;
            takim1[z].atilan_gol=w;
                printf("%d\n",takim1[z].atilan_gol);
            }}

            for(j=0;j<2;j++){
        if(  takim1[j].takma==array[4]){
                v=j;
            takim1[v].atilan_gol=q;
                    printf("%d\n",takim1[v].atilan_gol);
            }}
}

