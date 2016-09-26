/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Quiz2 - accounting
*/
#include<stdio.h>
int main(){
    int sumOut = 0,sumIn = 0,countOut = 0,countIn = 0,i,input,value;
    while(1){
        scanf("%d",&input);
        if(!input){
            break;
        }
        scanf("%d",&value);
        if(input == 1){
            sumIn += value;
            countIn ++;
        }else{
            sumOut += value;
            countOut++;
        }
    }
    printf("%d %d\n%d %d %d",countIn,countOut,sumIn,sumOut,sumIn - sumOut);
    return 0;
}
