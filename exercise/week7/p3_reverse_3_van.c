/*
Author: Pakkpon Phongthawee
LANG: C
Problem: reverse_3_vans
*/
#include<stdio.h>
int main(){
    int i,round,a=0,b=0,c=0,in;
    scanf("%d",&round);
    for(i=0;i<round;i++){
        scanf("%d",&in);
        if(a <= b && a <= c){
            printf("A\n");
            a+=in;
        }else if(b <= c && b <= a){
            printf("B\n");
            b+=in;
        }else{
            printf("C\n");
            c+=in;
        }
    }
    return 0;
}
