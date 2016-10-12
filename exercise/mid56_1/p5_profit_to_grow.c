/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Profit_to_grow
*/
#include<stdio.h>
int main(){
    int day,target,i,income,outcome,profit=0;
    scanf("%d %d",&day,&target);
    for(i=0;i<day;i++){
        scanf("%d %d",&income,&outcome);
        profit+=income-outcome;
    }
    if(profit>0){
        printf("Profit %d\n",profit);
    }else if(profit == 0 ){
        printf("Breakeven\n");
    }else{
        printf("Loss %d\n",-profit);
    }
    if(profit>=target){
        printf("Expand");
    }else if(profit>=target/2){
        printf("Wait and see\n");
        profit = 0;
        for(i=0;i<day;i++){
            scanf("%d %d",&income,&outcome);
            profit+=income-outcome;
        }
        if(profit>0){
            printf("Profit %d\n",profit);
        }else if(profit == 0 ){
            printf("Breakeven\n");
        }else{
            printf("Loss %d\n",-profit);
        }
        if(profit>=target){
            printf("Expand");
        }else{
            printf("Not expand");
        }
    }else{
        printf("Not expand");
    }

    return 0;
}
