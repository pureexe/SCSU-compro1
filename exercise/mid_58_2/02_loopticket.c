/*
Author: Pakkpon Phongthawee
LANG: C
Problem: loopticket
*/
#include<stdio.h>
int main(){
    double a,b;
    while(1){
        scanf("%lf %lf",&a,&b);
        if(a<0){
            break;
        }
        if(b>100||b<0){
            printf("invalid\n");
        }else{
            printf("%.2f\n",a*((100-b)/100));
        }
    }
    return 0;
}
