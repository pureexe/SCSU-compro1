/*
Author: Pakkpon Phongthawee
LANG: C
Problem: star2
*/
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    n = n*2+1;
    for(i=0;i<=n/2;i++){
        for(j=0;j<n/2-i;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            if(i==n/2&&j==i){
                printf("*");
            }else{
                printf("+");
            }
        }
        printf("\n");
    }
    for(i-=2;i>=0;i--){
        for(j=0;j<n/2-i;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("+");
        }
        printf("\n");
    }
    return 0;
}
