#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COLUMN 5
int m[ROW][COLUMN] = {{1,2,3,4,5},
{4,5,6,7,8},{8,7,6,5,4},{7,6,5,4,3},{6,5,4,3,2}};

int fill_diaogonal(int m[5][5], int row, int column){

if(row!=column) return -1; //Error
for(int i=0; i<row; i++){
for(int j=0; j<column; j++){
if(i==j) {
m[i][j]=1;
}
if(i+j==4) {
m[i][j]=-1;
}
if( i==2 && j==2 && i+j ==4) {
m[i][j]=0;
}
}
}
for(int i=0; i<row; i++){
for(int j=0; j<column; j++){
printf("%5d",m[i][j]);
}printf("\n");}

return 1; //Success
}
int main()
{
fill_diaogonal(m, ROW, COLUMN);

}
