/*
Author: Pakkpon Phongthawee
LANG: C
Problem: AsteriskBurst
*/
#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
