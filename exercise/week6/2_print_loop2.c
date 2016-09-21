/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int i,in;
    scanf("%d",&in);
    if(in<1){
        printf("Invalid input");
    }
    for(i=1;i<=in;i++){
        printf("%d\n",i);
    }
    return 0;
}
