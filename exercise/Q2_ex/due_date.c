/*
Author: Pakkpon Phongthawee
LANG: C
Problem: due_date
*/
#include<stdio.h>
int main(){
    int worker,job,i,sumJob=0,cJob;
    scanf("%d %d",&worker,&job);
    worker*=100;
    for(i=0;i<job;i++){
        scanf("%d",&cJob);
        sumJob+=cJob;
        printf("%d\n",(sumJob/worker)+1);
    }
    return 0;
}
