/*
Author: Pakkpon Phongthawee
LANG: C
Problem: golfscore2
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int i,par,p1,p2,p3,s1=0,s2=0,s3=0,minUser,minData = INT_MAX;
    for(i=0;i<9;i++){
        scanf("%d %d %d %d",&par,&p1,&p2,&p3);
        s1+= par+p1;
        s2+= par+p2;
        s3+= par+p3;
    }
    if(s1<minData){
        minData = s1;
        minUser = 1;
    }
    if(s2<minData){
        minData = s2;
        minUser = 2;
    }
    if(s3<minData){
        minData = s3;
        minUser = 3;
    }
    printf("%d %d %d\n%d\n%d",s1,s2,s3,minUser,minData);
    return 0;
}
