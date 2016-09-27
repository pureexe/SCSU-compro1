/*
Author: Pakkpon Phongthawee
LANG: C
Problem: countTargetNumber
*/
#include<stdio.h>
int main(){
    int target,in,sum=0;
    scanf("%d",&target);
    while(1){
        scanf("%d",&in);
        if(!in){
            break;
        }
        sum += (target == in
                )?1:0;
    }
    if(sum){
        printf("%d",sum);
    }else{
        printf("None");
    }
    return 0;
}
