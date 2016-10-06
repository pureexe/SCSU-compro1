/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    double w,h;
    scanf("%lf %lf",&w,&h);
    if(h>0&&w>0){
        h/=100;
        printf("%.2f",w/(h*h));
    }else{
        printf("invalid");
    }
    return 0;
}
