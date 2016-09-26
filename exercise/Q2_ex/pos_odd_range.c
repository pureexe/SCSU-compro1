/*
Author: Pakkpon Phongthawee
LANG: C
Problem: pos_odd_range
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int input,min=INT_MAX,max=INT_MIN;
    while(1){
        scanf("%d",&input);
        if(input<1){
            break;
        }
        if(input%2){
            min = (input < min)? input:min;
            max = (input > max)? input:max;
        }
    }
    printf("%d\n%d\n%d",max,min,max-min);
    return 0;
}
