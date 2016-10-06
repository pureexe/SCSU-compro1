/*
Author: Pakkpon Phongthawee
LANG: C
Problem: golfscore
*/
#include<stdio.h>
int main(){
    int i,par,p1,p2,p3,s1=0,s2=0,s3=0;
    for(i=0;i<9;i++){
        scanf("%d %d %d %d",&par,&p1,&p2,&p3);
        s1+= par+p1;
        s2+= par+p2;
        s3+= par+p3;
    }

    return 0;
}
