/*
Author: Pakkpon Phongthawee
LANG: C
Problem: updown series
*/
#include<stdio.h>
int main(){
    int a,b,c,i,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i*=c){
        sum+=i;
    }
    sum*=2;
    sum-=i/c;
    printf("%d",sum);
    return 0;
}
