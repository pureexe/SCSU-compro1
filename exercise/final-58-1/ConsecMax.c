/*
Author: Pakkpon Phongthawee
LANG: C
Problem: ConsecMax
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int box[10]={0},i,top=INT_MIN,temp;
    scanf("%d",&box[0]);
    for(i=1;i<10;i++){
        scanf("%d",&temp);
        box[i]+=temp+box[i-1];
        if(i == 2){
            top = box[2];
        }else if(i>=3 && top < box[i] - box[i-3]){
            top = box[i]-box[i-3];
        }
    }
    printf("%d",top);
    return 0;
}
