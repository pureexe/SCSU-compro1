/*
Author: Pakkpon Phongthawee
LANG: C
Problem: SumNSeries
*/
#include<stdio.h>
int main(){
    int n,sum=0,i,j,buff;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0,buff=1;j<i;j++){
            buff*=2;
        }
        sum+=buff;
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
