/*
314021 Mustafa Taha ÖZDEMIR -- muddafataha@gmail.com -- dosya islemleri, dosyadan giris alma, takma isme gore siralama
314056 Aysenur KALE -- aysenurrrkale@gmail.com -- struct kullanimi, puan siralamasi
*/



#include <stdio.h>
#include <stdlib.h>

struct lig{
    char takma_isim;
    char isim[12];
    int oynanan_mac;
    int galibiyet;
    int beraberlik;
    int maglubiyet;
    int at_gol;
    int ye_gol;
    int averaj;
    int puan;

}takim[26],t;
struct tt{
    char mac[2];
}ttt[10];
int takim_sayisi,galpuan,berpuan,magpuan,z,v,q,w;char array2[50][8],k=0;
void sonuc_al(struct lig takim[]);
void sonuc_al_1(struct lig takim[]);
void tkma_ism(struct lig takim[]);
void takim_oku(struct lig takim[]);
void LigTablosu(struct lig takim[]);
void dosya_yaz(struct lig takim[]);

int main()
{
    takim_oku(takim);
    tkma_ism(takim);
    //sonuc_al_1(takim);
    while(1){
    sonuc_al(takim);
    LigTablosu(takim);
    //dosya_yaz(takim);
    }
}
void tkma_ism(struct lig takim[]){
    int i,e=0;
    i=65;
        takim[0].takma_isim=i;
        while(e<takim_sayisi){

                takim[e].takma_isim=i;
            //printf("%c\n",takim[e].takma_isim);
        i++;e++;
        }//printf("%c",takim[3].takma_isim);
}

void takim_oku(struct lig takim[]){
    FILE *fp;
    int num,num1,num2,num3;

    fp=fopen("ayarlar.txt","r");
    fscanf(fp,"%d", &num);
    takim_sayisi=num;
    fscanf(fp,"%d", &num1);
    galpuan=num1;
    fscanf(fp,"%d", &num2);
    berpuan=num2;
    fscanf(fp,"%d", &num3);
    magpuan=num3;

    //printf("%d",takim_sayisi);

    fp=fopen("takimlar.txt","r");
    char dizii[12];
    int d=0,i,j;
    do {
        i = fscanf(fp,"%s",dizii); /* dosyadan bir kelime oku... */
            if (i != EOF)
                for(j=0;j<12;j++){
                    takim[d].isim[j]=dizii[j];
                        if(j==11)d++;
                }//printf("qqq: %s\n",diziii);
        }
        while (i != EOF);

fclose(fp);
}
char dizi_oku(char dizi1[]){
    int l,f=0;


        ttt[k].mac[0] = dizi1[0];
        ttt[k].mac[1] = dizi1[4];
        printf("%s\n",ttt[k].mac);


            for(l=0;l<5;l++){
                if(ttt[f].mac == ttt[l+1].mac ){

                    printf("ayni satirlar var..\n");

                }if(l==4)f++;

            }

    //printf("%s\n",ttt[0].mac);

    printf("%s\n",ttt[0].mac);

}
void sonuc_al(struct lig takim[]){
    char array[7];
    puts("mac sonucu girin.:::");
    fgets(array,8,stdin);
    fflush(stdin); //FILE* türünden işaretçi ile ilişkili olan dosyaya yazar ve klavyeden alınmış bilgileri tampondan siler.
    //dizi_oku(array); k++;
    int i,j;

    //puts("mac sonucu girin.:::");
    //gets(array);

    /*if(array[0]==array[4]){
        printf("yanlis giris yapildi.\n");
        system("PAUSE");
    }*/
    //else
    w = array[2] - '0'; // A 3 B 2
    q = array[6] - '0';
    //printf("w= %d\t",w);
    //printf("q= %d\n",q);

    for(i=0; i<takim_sayisi ;i++ ){
        if(takim[i].takma_isim == array[0]){
                z=i;
            takim[z].at_gol+=w;
                //printf("%d\n",takim[z].at_gol);
            }
        if(takim[i].takma_isim == array[4]){
                v=i;
            takim[v].at_gol+=q;
                //printf("%d\n",takim[v].at_gol);
            }
        }

 }
    void LigTablosu(struct lig takim[])
{
    int i,j=0,h,m=0;
    {
        if (w > q)
        {
            takim[z].ye_gol += q;
            takim[v].ye_gol += w;
            takim[z].averaj += (w-q);
            takim[v].averaj += (q-w);

            takim[z].puan += galpuan;
            takim[z].galibiyet++;
            takim[z].oynanan_mac++;
            takim[v].maglubiyet++;
            takim[v].puan += magpuan;
            takim[v].oynanan_mac++;
        }

      else if (w < q)  // 5 2 - 3 5
        {
            takim[z].ye_gol += q;
            takim[v].ye_gol += w;
            takim[z].averaj += (w-q);
            takim[v].averaj += (q-w);

            takim[v].puan += galpuan;
            takim[v].galibiyet ++;
            takim[v].oynanan_mac++;
            takim[z].maglubiyet++;
            takim[z].puan += magpuan;
            takim[z].oynanan_mac++;
        }
      else if (w == q)
        {

            takim[z].ye_gol += q;
            takim[v].ye_gol += w;
            takim[z].averaj += (w-q);
            takim[v].averaj +=(q-w);

            takim[z].puan += berpuan;
            takim[z].beraberlik ++;
            takim[z].oynanan_mac++;
            takim[v].beraberlik++;
            takim[v].puan += berpuan;
            takim[v].oynanan_mac++;
        }
    }

    printf(" 2018-2019 Programlamaya Giris Lig Tablosu \n\n");
    printf("***************************************************************************************\n\n");
    printf("T.Isim       Isim\t   O_M    G      M      B      A_Gol      Y_Gol\t     Averaj     Puan\n\n\n");
    printf("******       ****\t   ***    **     **     **     *****      *****      ******     ****\n\n");


    for ( i = 0; i < takim_sayisi; i++)
    {
        printf("%c\t%s\t    %d     %d      %d      %d        %d          %d\t       %d         %d\n",
        takim[i].takma_isim, takim[i].isim, takim[i].oynanan_mac, takim[i].galibiyet,takim[i].maglubiyet,
        takim[i].beraberlik, takim[i].at_gol, takim[i].ye_gol, takim[i].averaj,
        takim[i].puan);
    }

}

void dosya_yaz(struct lig takim[]){
    FILE *fp;
    int i,h;
    fp=fopen("yaz.txt","w");
    fprintf(fp," 2018-2019 Programlamaya Giris Lig Tablosu \n\n");
    fprintf(fp,"**************************************************************************************\n\n");
    fprintf(fp,"T.Isim       Isim\t\tO_M     G       M        B       A_Gol       Y_Gol          Averaj       Puan\n\n\n");
    fprintf(fp,"******       ****\t\t***      **      **       **      *****       *****         ******       ****\n\n");


    for(i=1; i<takim_sayisi; i++)
    {
        for(h=0; h<takim_sayisi-i; h++)
        {
            if(takim[h].puan < takim[h+1].puan)
            {
                t=takim[h];
                takim[h]=takim[h+1];
                takim[h+1]=t;
            }
        }
    }
    for(i=0; i<takim_sayisi; i++){

            fprintf(fp,"%c\t%s\t %d        %d        %d        %d           %d              %d\t        %d            %d\n",
            takim[i].takma_isim, takim[i].isim, takim[i].oynanan_mac, takim[i].galibiyet,takim[i].maglubiyet,
            takim[i].beraberlik, takim[i].at_gol, takim[i].ye_gol, takim[i].averaj,
            takim[i].puan);
                }
    fclose(fp);
}

void sonuc_al_1(struct lig takim[]){
    FILE *fp;
    fp=fopen("maclar.txt","r");
    int n=0,i,h=0,p,j;
                        // a 3 b 2

        if (fp!=NULL)
            {while(!feof(fp))
            {
            fgets(array2[n],8,fp);
            //printf("%s\n",array2[2]);
            n++;
                }}
fclose(fp);
//*********************************************************************************
                    // ESLESEN SATIR KONTROLU.
        for(p=0; p<32; p=p+2){
                if(array2[h][0] == array2[p+2][0] && array2[h][4] == array2[p+2][4]){
                         printf("eslesen sonuc var\n");

                        }if(p==30)h=h+2;
                    }
//*********************************************************************************
    int d=0;
    //printf("w= %d\t",w);
    //printf("q= %d\n",q);
        while(d<32){ // MACLAR.TXT'DEN OKUNAN SATIR SAYISININ 2 KATI.
            for(i=0; i<takim_sayisi ;i++ ){    // A 3 B 0
               if(takim[i].takma_isim == array2[d][0]){
                        z=i;
                        w = array2[d][2] - '0';
                    takim[z].at_gol+=w;
                        //printf("%d\n",takim[z].at_gol);
                    }
               if(takim[i].takma_isim == array2[d][4]){
                        v=i;
                        q = array2[d][6] - '0';
                    takim[v].at_gol+=q;
                        //printf("%d\n",takim[v].at_gol);
                    }
            }LigTablosu(takim); d+=2;
    }
}

