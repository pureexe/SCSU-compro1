/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int i = 0,d=1;
    while(d!=0 && ++i)
        scanf("%d",&d);
    printf("%d",i-1);
    return 0;
}
