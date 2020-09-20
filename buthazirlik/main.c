#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Word{
char tr[8];
char en[8];
char type[2];
};
void oku();

int main()
{
    struct Word d[10];
    FILE *f;
    f=fopen("yaz.txt","r");
    d[0].en[0]='q';
    d[0].en[1]='w';
    fscanf(f,"%s",d[0].en);
    printf("%s\n",d[0].en);
    fclose(f);
    //oku();
    strr();

}
void oku(){
int a;
char dizi[10];
FILE *fp;
fp=fopen("oku.txt","r");
fscanf(fp,"%d",&a);
//int num=a;
printf("%d\n",a);
fclose(fp);


fp=fopen("yaz.txt","w");
fprintf(fp,"naber keko");
fprintf(fp,"bro naptýn amk");
fprintf(fp,"%d",a);

fclose(fp);
}
void strr (){
    char dizi[5];
    char a[2]="q";
    char b[2]="c";
    printf("%s",strcpy(a,b));



}
