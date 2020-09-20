#include <stdio.h>
#include <stdlib.h>
#define z 20
struct takim{
    char name[12];
    char nick_name[1];
    int mac_sayisi;
    int galibiyet;
    int beraberlik;
    int maglubiyet;
    int atilan_gol;
    int yenen_gol;
    int averaj;
    int puan;
};



int main()
{
    //char dizi[10]={'e e'};
    //char dizi1[z],dizi2[z]={'gg'};
    int i,sayac=0,tor;
    struct takim tak;
    /*struct takim tak1;
    tak.atilan_gol=0;
    tak1.atilan_gol=100;
    printf("atilan gol =%d\n",tak.atilan_gol);

    printf("atilan gol =%d\n",tak1.atilan_gol);
    */
    FILE *fp,*fp1,*fp3;
    char c,c1,c3,dizi4[9999],*dizi7[9999];
    char arr[100][50];
    fp=fopen("oku.txt","r");

    /*do {
        if(c=='\n'){
        }
    }
    while(!feof(fp)){
        /*c=getc(fp);
        printf("%c",c);
        }*/
        while(1){
        char r = (char)fgetc(inp);
        int k = 0;
        while(r!=',' && !feof(inp)){	//read till , or EOF
            arr[i][k++] = r;			//store in array
            r = (char)fgetc(inp);
        }
        arr[i][k]=0;		//make last character of string null
        if(feof(inp)){		//check again for EOF
            break;
        }
        i++;
    }
    int j;
    for(j = 0;j<=i;j++){
        printf("%s\n",arr[j] );	//print array
    }
    fclose(fp);

    /*
    fp1=fopen("maclar.txt","r");

        c1=getc(fp1);
        dizi[1]=c1;
        printf("\n dizinin:\t%s",dizi);
        c1=getc(fp1);
        c1=getc(fp1);
        dizi[2]=c1;
        printf("\n%s",dizi);
       // printf("\n%s",dizi);





    fclose(fp1);


    fp3=fopen("tablo.txt","w");
        //c3=3;
        tak.atilan_gol=3;
        //fprintf(fp3,"%d",c3);

        tak.galibiyet=1;
        tak.averaj=3;
        fprintf(fp3,"\n averaj :%d\n galibiyet sayisi=%d\n atilan gol sayisi=%d\n",tak.averaj,tak.galibiyet,tak.atilan_gol);

    fclose(fp3);
    puts("diziyi girin.");
    //scanf("%s",&dizi1);
    gets(dizi1);
    oku(dizi1);
    //yaz(dizi1,dizi2);

}

//printf(fp3,"\n averaj :%d\n galibiyet sayisi=%d\n atilan gol sayisi=%d\n",tak.averaj,tak.galibiyet,tak.atilan_gol);


void oku(char q[]){
    struct takim tak1;
    puts(q);
    if(q[1]>q[3]){

        tak1.atilan_gol=q[1];
        tak1.galibiyet=1;
        tak1.averaj=q[1]-q[3];
        printf("\n averaj :%d\n galibiyet sayisi=%d\n atilan gol sayisi=%d\n",tak1.averaj,tak1.galibiyet,tak1.atilan_gol);

    }
}

/*void yaz (void oku(char q[]),char r[]){
    int i;
    char q[z];
    for(i=0;i<'\0';i++){
            r[i]=q[i];
    }
    printf("eleman:%s",r);
    }
*/
}
