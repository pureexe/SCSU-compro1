/*
Author: Pakkpon Phongthawee
LANG: C
Problem: groupticket3
*/
#include<stdio.h>
int main(){
    double sum = 0,price,discount=0;
    int user,n,i,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %lf",&user,&price);
        cnt+= user;
        sum+= (user>=20)?price*user*80.0/100:((user/2)*2)*price*90.0/100+(user%2)*price;
        discount += (user>=20)?price*user*20.0/100:((user/2)*2)*price*10.0/100;
    }
    printf("%d\n%.2f\n%.0f",cnt,sum/cnt,discount);
    return 0;
}
