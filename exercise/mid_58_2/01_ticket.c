/*
Author: Pakkpon Phongthawee
LANG: C
Problem: ticket
*/
#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(b>100||b<0){
        printf("invalid");
    }else{
        printf("%.2f",a*((100-b)/100));
    }
    return 0;
}
