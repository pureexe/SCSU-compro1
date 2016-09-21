/*
Author: Pakkapon Phongthawee
LANG: C
Copyright all reserved (2016)
DATE: 2016-09-14-18.14
PROBLEM: SumBetween
*/
#include<stdio.h>
int main(){
    int sum = 0,i=1;
    while(1){
        scanf("%d",&i);
        if(!(i%10)){
            break;
        }
        sum+=(!(i%3)||!(i%5))?i:0;
    }
    printf("%d",sum);
    return 0;
}
