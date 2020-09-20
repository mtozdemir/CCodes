#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i,j;
    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
                    for(j=0;j<3;j++)
                {
        printf("%3d",matris[i][j]);
    }printf("\n");}
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
                {

                    if(i==j){
                        matris[i][j]=1;
                    }
                    if(i+j==2){
                        matris[i][j]=-1;
                    }
                    if(i==1 && j==1 && i+j==2){
                        matris[i][j]=0;
                    }
                }}
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){

                        printf("%3d",matris[i][j]);
                    }   printf("\n");
                    }

    return 0;
}
