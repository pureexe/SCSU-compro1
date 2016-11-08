/*
Author: Pakkpon Phongthawee
LANG: C
Problem: number_occurence
*/
#include<stdio.h>
int box[2500000];
int main(){
    int i,target,n,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(box[i]==target){
            printf("%d ",i+1);
            b = 1;
        }
    }
    if(b==0){
        printf("0");
    }
    return 0;
}
