#include <stdlib.h>
#include <stdio.h>

int MAXTEAMS,galpuan,berpuan,magpuan;
int v=0,z=0;
struct league{
    char isim[12];
    char takma;
    int atilan_gol;
    int yenen_gol;
    int averaj;
    int puan;
    int oynanan_mac;
    int galibiyet;
    int maglubiyet;
    int beraberlik;
}takim[10];

void takim_oku(struct league takim[]);
void tkma_ism(struct league takim[]);
void sonuc_al(struct league takim[]);
void displayLigTablosu(struct league takim[]);


int main(void){   //A 4 B 5

    while(1){
    tkma_ism(takim);
    sonuc_al(takim);
    takim_oku(takim);
    displayLigTablosu(takim);
    //sayac++;printf("sayacc: %d \n",sayac);
    }
}
void tkma_ism(struct league takim[]){
    int i,e=0;
    i=65;
        takim[0].takma=i;
        while(e<MAXTEAMS){

                takim[e].takma=i;
           // printf("%c\n",takim[e].takma);
        i++;e++;
        }
}
void sonuc_al(struct league takim[]){

    char array[6];
    int i,j,q,w;
    puts("mac sonucu girin.:::");
    gets(array);
    w = array[2] - '0';
    q = array[6] - '0';
    //printf("w= %d\t",w);
    //printf("q= %d\n",q);
    for(i=0; i<MAXTEAMS ;i++ ){
        if(takim[i].takma==array[0]){
                z=i;
            takim[z].atilan_gol=w;
                printf("%d\n",takim[z].atilan_gol);
            }}

            for(j=0;j<MAXTEAMS;j++){
        if(  takim[j].takma==array[4]){
                v=j;
            takim[v].atilan_gol=q;
                    printf("%d\n",takim[v].atilan_gol);
            }}

    }


void displayLigTablosu(struct league takim[])
{
    int i,j=0,h=0,m=0;

    //for ( v,z = 0; v,z < MAXTEAMS; v++,z++)
    {
        if (takim[z].atilan_gol > takim[v].atilan_gol)
        {
            h+=takim[z].atilan_gol;
            m+=takim[v].atilan_gol;
            takim[z].averaj+=(h-m);
            takim[v].averaj+=(m-h);

            takim[z].puan += galpuan;
            takim[z].galibiyet ++;
            takim[z].oynanan_mac++;
            takim[v].maglubiyet++;
            takim[v].puan += magpuan;
            takim[v].oynanan_mac++;
            takim[z].yenen_gol+=m;
            takim[v].yenen_gol+=h;

        }

//2. MACLARDA ATILAN GOLLERE BAKILACAK !!!!!
                                                        // A B - C B
       if (takim[z].atilan_gol < takim[v].atilan_gol)  // 5 2 - 3 5
        {


            h+=takim[z].atilan_gol;
            m+=takim[v].atilan_gol;
            takim[z].averaj+=(h-m);
            takim[v].averaj+=(m-h);

            takim[v].puan += galpuan;
            takim[v].galibiyet ++;
            takim[v].oynanan_mac++;
            takim[z].maglubiyet++;
            takim[z].puan += magpuan;
            takim[z].oynanan_mac++;
            takim[z].yenen_gol+=m;
            takim[v].yenen_gol+=h;
        }
       if (takim[z].atilan_gol == takim[v].atilan_gol)
        {
            h+=takim[z].atilan_gol;
            m+=takim[v].atilan_gol;
            takim[z].averaj+=(h-m);
            takim[v].averaj+=(m-h);

            takim[z].puan += berpuan;
            takim[z].beraberlik ++;
            takim[z].oynanan_mac++;
            takim[v].beraberlik++;
            takim[v].puan += berpuan;
            takim[v].oynanan_mac++;
        }
    }

    printf(" Lig Tablosu \n\n");
    printf("*********************************************************************************************************************\n\n");
    printf("T.Isim   Isim   Oynanan Mac   Galibiyet   Maglubiyet   Beraberlik   Atilan Gol      Yenen Gol\t  Averaj\tPuan\n\n\n");
    printf("******   ****   ***********   *********   **********   **********   ***********     *********    ******   \t*****\n\n");


    for ( i = 0; i < MAXTEAMS; i++)
    {
        printf("%c\t\t%s     %d\t\t%d\t   %d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
        takim[i].takma, takim[i].isim, takim[i].oynanan_mac, takim[i].galibiyet,takim[i].maglubiyet,
        takim[i].beraberlik, takim[i].atilan_gol, takim[i].yenen_gol, takim[i].averaj,
        takim[i].puan);
    }
}
void takim_oku(struct league takim[]){
    FILE *fp;
    int num,num1,num2,num3;

    fp=fopen("oku1.txt","r");
    fscanf(fp,"%d", &num);
    MAXTEAMS=num;
    fscanf(fp,"%d", &num1);
    galpuan=num1;
    fscanf(fp,"%d", &num2);
    berpuan=num2;
    fscanf(fp,"%d", &num3);
    magpuan=num3;

    //printf("%d",MAXTEAMS);

    fp=fopen("oku.txt","r");
    char dizii[MAXTEAMS][12];
    int i=1;
    while(i<=MAXTEAMS){
        fscanf(fp, "%s", dizii[i-1]);

       // takim[i-1].isim = dizii[i-1];
        i++;
    }
    printf("%s\n",dizii[2]);

fclose(fp);
}



