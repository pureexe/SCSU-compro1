/*
Author: Pakkpon Phongthawee
LANG: C
Problem: sumbyrowcol
*/
#include<stdio.h>
int main(){
    int i,j,n,sum=0,isCol,position,row,col,box[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&box[i][j]);
        }
    }
    scanf("%d %d",&isCol,&position);
    if(isCol){
        for(i=0;i<row;i++){
            sum+=box[i][position];
        }
    }else{
        for(i=0;i<col;i++){
            sum+=box[position][i];
        }
    }
    printf("%d",sum);
    return 0;
}
