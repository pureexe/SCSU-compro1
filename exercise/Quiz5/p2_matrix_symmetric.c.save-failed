/*
Author: Pakkpon Phongthawee
LANG: C
Problem: matrix_symmetric
*/
#include<stdio.h>
int main(){
    int box[201][201]={0},temp,i,j,n;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            scanf("%d",&temp);
            box[i][j]=temp;
            box[j][i]=temp;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",box[i][j]);
        }
        printf("\n");
    }
    return 0;
}
