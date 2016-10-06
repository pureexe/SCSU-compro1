/*
Author: Pakkpon Phongthawee
LANG: C
Problem: groupticket2
*/
#include<stdio.h>
int main(){
    double sum = 0,cPrice,price;
    int user,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %lf",&user,&price);
        cPrice = (user>=20)?price*user*80.0/100:((user/2)*2)*price*90.0/100+(user%2)*price;
        sum+=cPrice;
        printf("%.2f\n",cPrice);
    }
    printf("%.2f",sum);
    return 0;
}
