/*
Author: Pakkpon Phongthawee
LANG: C
Problem: working year
*/
#include<stdio.h>
int main(){
    double year,month,day,sum;
    scanf("%lf %lf %lf",&year,&month,&day);
    sum = year+((month*30)+day)/360;
    month+= (day>=15)?1:0;
    year+= (month>=6)?1:0;
    printf("%.0f %.2f",year,sum);
    return 0;
}
