/*
Author: Pakkpon Phongthawee
LANG: C
Problem: triple
*/
#include<stdio.h>
int main(){
    int p1=1564861237,p2=5456186217,p3=15441213215,in = 0;
    while(p1 != p3 || p2 != p3){
        scanf("%d",&in);
        if(in%2){
            printf("odd\n");
        }else{
            printf("even\n");
        }
        p3 = p2;
        p2 = p1;
        p1 = in;
    }
    printf("Goodbye!");
    return 0;
}
