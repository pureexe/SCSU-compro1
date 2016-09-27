/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Duedate
*/
#include<stdio.h>
int main(){
    int job,worker,sum=0,work,day,i;
    scanf("%d %d",&worker,&job);
    for(i=0;i<job;i++){
        scanf("%d",&work);
        sum += work;
        day = (sum+(worker*100)-1)/(worker*100);
        printf("%d\n",day);
    }
    return 0;
}
