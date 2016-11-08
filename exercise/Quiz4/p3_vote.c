/*
Author: Pakkpon Phongthawee
LANG: C
Problem: vote
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int box[101]={0},i,n,k,t,value_max=INT_MIN,key_max;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++){
        scanf("%d",&t);
        box[t]++;
    }
    for(i=1;i<=n;i++){
        if(value_max<box[i]){
            key_max = i;
            value_max = box[i];
        }
    }
    printf("%d\n%d",key_max,value_max);
    return 0;
}
