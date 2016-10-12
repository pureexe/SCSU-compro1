/*
Author: Pakkpon Phongthawee
LANG: C
Problem: star1
*/
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    //Print Header
    for(i=0;i<n/2*2+1;i++){
        printf("*");
    }
    printf("\n");
    // Print content (Upside)
    for(i=0;i<n/2;i++){
        for(j=0;j<n/2-i;j++){
            printf("*");
        }
        for(j=0;j<i*2+1;j++){
            printf(" ");
        }
        for(j=0;j<n/2-i;j++){
            printf("*");
        }
        printf("\n");
    }
    // Print content (Downside)
    for(i-=2;i>=0;i--){
        for(j=0;j<n/2-i;j++){
            printf("*");
        }
        for(j=0;j<i*2+1;j++){
            printf(" ");
        }
        for(j=0;j<n/2-i;j++){
            printf("*");
        }
        printf("\n");
    }
    //Print Footer
    for(i=0;i<n/2*2+1;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}
