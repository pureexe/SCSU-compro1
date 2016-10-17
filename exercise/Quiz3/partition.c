/*
Author: Pakkpon Phongthawee
LANG: C
Problem: partition
*/
#include<stdio.h>
int main(){
    int w,n,i,j;
    scanf("%d %d",&w,&n);
    for(i=0;i<w*n+n+1;i++){
        printf("*");
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("*");
        for(j=0;j<w;j++){
            printf(" ");
        }
    }
    printf("*\n");
    for(i=0;i<w*n+n+1;i++){
        printf("*");
    }
    return 0;
}
