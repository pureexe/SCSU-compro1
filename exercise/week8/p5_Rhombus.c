/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Rhombus
*/
#include<stdio.h>
int main(){
    int i,j,input,n,m;
    scanf("%d",&input);
    for(i=0;i<=input/2;i++){
        for(j=i;j<input/2;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=input/2-1;i>=0;i--){
        for(j=i;j<input/2;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
