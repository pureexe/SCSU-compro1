/*
Author: Pakkpon Phongthawee
LANG: C
Problem: NumberOccurrence
*/
#include<stdio.h>
int box[2500000];
int main(){
    int n,i,target,p = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(box[i] == target){
            p = 1;
            printf("%d ",i+1);
        }
    }
    if(!p){
        printf("0");
    }
    return 0;
}
