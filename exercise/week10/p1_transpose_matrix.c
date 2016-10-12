/*
Author: Pakkpon Phongthawee
LANG: C
Problem: transpose_matrix
*/
#include<stdio.h>
int main(){
    int i,j,m,n,box[500][500];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&box[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",box[j][i]);
        }
        printf("\n");
    }
    return 0;
}
