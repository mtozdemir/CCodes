#include <stdio.h>
#include <stdlib.h>

void func(char * input){

 printf("%c", *input);

 if(*(input+1) != '\0')
    {func(input+1);}
 else{
 printf("-");
 printf("%c", *input);
}

}
int main()
{
 char *in = "Hello World";
 func(in);
 return 0;
}

/*
void myShrink(int *param1, const int param2);

int main ()
{
int myArray[] = {1, 2, 1, 5, 1, 2};
int index;
myShrink(myArray, 6);

printf("GUNCELLENMIS DIZI: ");

for(index = 0; index < 6; index++){
 printf("%d\t", myArray[index]);
}
return 0;
}
void myShrink(int *param1, const int param2){

    int top,ort,i;

    for(i=0;i<param2;i++){

        top+=*(param1+i);

    }ort=top/param2;
    printf("%d\n",ort);

    for(i=0;i<param2;i++){

        if(*(param1+i)<ort){
            *(param1+i)+=1;

        }
        else if(*(param1+i)>ort){
            *(param1+i)-=1;

        }
    }
}

#include <stdio.h>
void myInitialize(int *param1, const int rows, const int columns);
int main ()
{
int myArray[5][5];
int index1, index2;
myInitialize(&myArray[0][0], 5, 5);

printf("GUNCELLENMIS DIZI:\n");

    for(index1 = 0; index1 < 5; index1++){
        for(index2 = 0; index2 < 5; index2++){
            printf("%d\t", myArray[index1][index2]);
        }
    printf("\n");
    }
return 0;
}
void myInitialize(int *param1, const int rows, const int columns){
    int i,j;

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(i==j){
                    *((param1+i*columns) + j)=0;
               //printf("%d\n",*((param1+i*columns) + j));

            }
            else
                *((param1+i*columns) + j)=i-j;
        }
    }
}

#include <stdio.h>
void myAddition(int param1[][2], int param2[][2], const int rows, const int
columns);
int main ()
{
int myArray1[2][2] = {{0, 5}, {0, 0}};
int myArray2[2][2] = {{1, 2}, {3, 4}};
int index1, index2;
myAddition(myArray1, myArray2 , 2, 2);
printf("MATRIS TOPLAM SONUCU:\n");
for(index1 = 0; index1 < 2; index1++){
for(index2 = 0; index2 < 2; index2++){
 printf("%d\t", myArray1[index1][index2]);
}
printf("\n");
}
return 0;
}
void myAddition(int param1[][2], int param2[][2], const int rows, const int
columns){
int i,j;
for(i=0;i<rows;i++){
    for(j=0;j<rows;j++){
        param1[i][j]=param1[i][j]+param2[i][j];


    }
}


}
*/
