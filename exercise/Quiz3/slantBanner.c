/*
Author: Pakkpon Phongthawee
LANG: C
Problem: slantBanner
*/
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i-j)%3==0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
