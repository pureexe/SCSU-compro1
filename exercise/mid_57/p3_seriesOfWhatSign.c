/*
Author: Pakkpon Phongthawee
LANG: C
Problem: seriesOfWhatSign
*/
#include<stdio.h>
int main(){
    int a1,a2,a3,a4,i,sum=0,N,current;
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&N);
    sum+=a1+a2+a3+a4;
    for(i=5;i<=N;i++){
        current = (a3+a1)*5/4;
        current *= (current%2)?-1:1;
        sum+=current;
        a1 = a2;
        a2 = a3;
        a3 = a4;
        a4 = current;
    }
    printf("%d",sum);
    return 0;
}
