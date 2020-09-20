#include <stdio.h>
#include <stdlib.h>

int main()
{
    matris_sirala();
}

int matris_sirala( int satir,int sutun){
    int i,j;
    puts("satir sutun degerlerini giriniz..");
    scanf("%d%d",&satir,&sutun);

    int matris[satir][sutun];
    for(i=0;i<satir;i++){
        for(j=0;j<sutun-1;j++){
            scanf("%d",&matris[i][j]);
        }
}
    for(i=0;i<satir;i++){
        for(j=0;j<sutun-1;j++){
            printf("%3u",matris[i][j]);
        }printf("\n");
}
int dizi[satir];
    for(i=0;i<satir;i++){int toplam=0;          //1  2  3 ,6
        for(j=0;j<sutun-1;j++){                   //4  5  6 ,15
                toplam+=matris[i][j];           //7  8  9 ,24
                    matris[i][sutun-1]=toplam;
        }printf("%d\n",toplam);
}
int maks = matris[0][sutun-1];
i=0;
    while (i<satir){

            if ( matris[i][sutun-1]> matris[i+1][sutun-1])maks=matris[0][sutun-1];

                else if(matris[i+1][sutun-1]>matris[i][sutun-1]){
                    maks=matris[i+1][sutun-1];
            }
            i++;
    }
       for(i=0;i<satir;i++){        //satır agirliklari eklenerek yazdırıldı
        for(j=0;j<sutun;j++){
            printf("%3u",matris[i][j]);
        }printf("\n");
    }
    if (matris[i][sutun-1]>matris[i+1][sutun-1]){int gecici;
                    for(i=0;i<satir;i++){
                        for(j=0;j<sutun;j++){

                                gecici=matris[i+1][j];
                                matris[i+1][j]=matris[i][j];
                                matris[i][j]=gecici;
                printf("%3u",matris[i][j]);
            }
        }printf("\n");
            }

               /* else if(matris[i][sutun-1]>matris[i+1][sutun-1]){int gecici[satir][sutun];
                    for(i=0;i<satir;i++){
                        for(j=0;j<sutun;j++){

                                gecici[i][j]=matris[i+1][j];
                                matris[i+1][j]=matris[i][j];
                                matris[i][j]=gecici[i][j];
                printf("%3u",gecici[i][j]);}
        }printf("\n");
            }*/
}

