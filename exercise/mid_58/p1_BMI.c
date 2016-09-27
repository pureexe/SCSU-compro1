/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    double w,h;
    scanf("%lf %lf",&w,&h);
    h/=100;
    printf("%.2f",w/(h*h));
    return 0;
}
