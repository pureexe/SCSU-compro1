/*
Author: Pakkpon Phongthawee
LANG: C
Problem: HalfDiamond
*/
#include<stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d %d",&n,&a);
    if(a == 1 || a == 2){
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                printf("%d ",n+j-i);
            }
            printf("\n");
        }
    }
    if(a == 1 || a == 3){
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                printf("%d ",j+i+1);
            }
            printf("\n");
        }
    }
    return 0;
}
