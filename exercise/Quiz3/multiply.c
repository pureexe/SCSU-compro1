/*
Author: Pakkpon Phongthawee
LANG: C
Problem: multiply
*/
#include<stdio.h>
int main(){
    int from,to,step,temp,i,j;
    scanf("%d %d %d",&from,&to,&step);
    if(from>to){
        temp = from;
        from = to;
        to = temp;
    }
    for(i=from;i<=to;i++){
        printf("%d: ",i);
        for(j=1;j<=12;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}
