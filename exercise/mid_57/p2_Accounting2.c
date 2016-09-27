/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Accounting2
*/
#include<stdio.h>
int main(){
    int a,b,sum=0;
    while(1){
        scanf("%d %d",&a,&b);
        if(!(a||b)){
            break;
        }
        sum+=(--a)?-b:b;
    }
    if(sum<0){
        printf("Bad\n%d",-sum);
    }else{
        printf("Good\n%d",sum);
    }
    return 0;
}
