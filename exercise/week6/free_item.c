/*
Author: Pakkpon Phongthawee
LANG: C
Problem: FreeItem
*/
#include<stdio.h>
int main(){
    int in,c=0,sum=0;
    while(1){
        scanf("%d",&in);
        if(in < 200 || in > 10000){
            break;
        }
        if(!(++c%5)){
            printf("free %d\n",in);
        }else{
            sum+=in;
        }
    }
    printf("total %d",sum);
    return 0;
}
