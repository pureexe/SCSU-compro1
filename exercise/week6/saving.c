/*
Author: Pakkpon Phongthawee
LANG: C
Problem: saving
*/
#include<stdio.h>
int main(){
    int money = 0,in;
    while(money<200000){
        scanf("%d",&in);
        money+=(in>=5000)?in:0;
    }
    if(money == 200000){
        printf("Total = 200,000");
    }else{
        printf("Total = %d more than 200,000",money);
    }
    return 0;
}
