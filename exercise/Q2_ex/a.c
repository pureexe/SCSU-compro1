/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: C
PROBLEM: divisibility_sum)
*/
#include<stdio.h>
int main(){
    int i = 1,a = 0,b = 0,c = 0,x,y;
    scanf("%d %d",&x,&y);
    while(i>0){
        scanf("%d",&i);
        a+=(!(i%x)&&(i%y))?i:0;
        b+=((i%x)&&!(i%y))?i:0;
        c+=(!(i%x)||!(i%y))?i:0;
    }
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}
