/*
Author: Pakkpon Phongthawee
LANG: C
Problem: distance
*/
#include<stdio.h>
int main(){
    double h,m,v,s;
    scanf("%lf %lf %lf",&v,&h,&m);
    s = v*(h+m/60);
    if(s<0){
        printf("%.1f\nreverse",s*-1);
    }else{
        printf("%.1f",s);
    }
    return 0;
}
