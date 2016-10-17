/*
Author: Pakkpon Phongthawee
LANG: C
Problem: BoxInFrame
*/
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(
               (i==1&&j!=0&&j!=n-1)
                ||(i==n-2&&j!=0&&j!=n-1)
                ||(i!=1&&i!=n-2&&i!=0&&i!=n-1&&j==1)
                ||(i!=1&&i!=n-2&&i!=n-1&&j==n-2)
               &&i!=0
            ){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
