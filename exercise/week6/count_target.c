/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int i = 0,d=1,s;
    scanf("%d",&s);
    while(d!=0){
        scanf("%d",&d);
        i+=d==s?1:0;
    }
    printf("%d",i);
    return 0;
}
