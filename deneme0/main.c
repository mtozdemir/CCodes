#include <stdio.h>
#include <stdlib.h>
float us_al(float,float);
int main()
{
    int a=3,b=5,z,d,x,i,j=0;
    d=a+b-2;
    z=2*d-8;
    //char *e;
    int q[5]={1,2,3,4,5};
    char s[7] = {'m','u','s','t','a','a','\0'};
    printf("%c\n",s[5]);


    printf("z= %d \nd= %d",z,d);
    puts("\nbir deðer giriniz...");
    scanf("%d",&x);
    printf("girilen deger : %d\n",x);


    printf("\ndizinin 3. elemani:%d\n",q[3]);
        for(i=0;i<5;i++){
            printf("\ndizinin %d. elamaný : %d",i,q[i]);
        }
        while(j<5){
            printf("\ndizinin %d. elemani: %d",j,q[j]);
                j++;
            }
        printf("\n%.2f", us_al(4,3));
  }
  //pozitif üs alma
  float us_al(float n,float m){
    int o;
    float c=1.0;
    for(o=1;o<=m;o++){
        c=c*n;
    }return c;
}
