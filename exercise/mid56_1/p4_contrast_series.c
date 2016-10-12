/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Contrast_series
*/
#include<stdio.h>
int main(){
    double m=3,n=1,sum=0,a,b,x,y;
    scanf("%lf %lf",&a,&b);
    while(1){
        sum += m*n;
        if(m == a && n == b){
            break;
        }
        //printf("(%d == %d x %d == %d)\n",m,a,n,b);
        x = m;
        y = n;
        m = x+y;
        n = x-y;
    }
    printf("%.0f",sum);
    return 0;
}
