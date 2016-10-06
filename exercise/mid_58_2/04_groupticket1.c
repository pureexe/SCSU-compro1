/*
Author: Pakkpon Phongthawee
LANG: C
Problem: groupticket1
*/
#include<stdio.h>
int main(){
    int user,price;
    scanf("%d %d",&user,&price);
    printf("%.2f",(user>=20)?price*user*80.0/100:((user/2)*2)*price*90.0/100+(user%2)*price);
    return 0;
}
