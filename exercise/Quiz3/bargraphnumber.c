/*
Author: Pakkpon Phongthawee
LANG: C
Problem: bargraphnumber
*/
#include<stdio.h>
int main(){
    int i,n;
    while(1){
        scanf("%d",&n);
        if(n<=0){
            break;
        }
        for(i=1;i<=n;i++){
            if(i==n){
                printf("%d",n%10);
            }else if(i%5==0){
                printf("X");
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
