/*
Author: Pakkpon Phongthawee
LANG: C
Problem: HorizontalBarGraph
*/
#include<stdio.h>
int main(){
    int i,m;
    while(1){
        scanf("%d",&m);
        if(m<1){
            break;
        }
        for(i=0;i<m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
