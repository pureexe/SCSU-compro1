/*
Author: Pakkpon Phongthawee
LANG: C
Problem: RCCrood
*/
#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
    return 0;
}
