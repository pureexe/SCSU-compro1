/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Two level series
*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum = a;
    while(a*c+1<b){
        a*=c++;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
