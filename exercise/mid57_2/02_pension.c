
/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    int choice;
    double money,year;
    scanf("%d %lf %lf",&choice,&year,&money);
    if(choice==1||choice==3){
        printf("%.2f",year*money);
    }else if(choice==2){
        printf("%.2f",year*money/50);
    }else{
        double out = year*money/50;
        if(out>0.7*money){
            printf("%.2f\nreduce",0.7*money);
        }else{
            printf("%.2f",out);
        }
    }
    return 0;
}
