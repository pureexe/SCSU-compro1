/*
Author: Pakkpon Phongthawee
LANG: C
Problem: close_avg
*/
#include<stdio.h>
#include<limits.h>
int abs(int n){
    return (n<0)?-n:n;
}
int main(){
    int i,box[1000],n,mean=0,distance=INT_MAX;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
        mean+=box[i];
    }
    mean/=n;
    for(i=0;i<n;i++){
        if(distance > abs(box[i]-mean)){
            distance = abs(box[i]-mean);
        }
    }
    printf("%d\n%d\n",mean,distance);
    for(i=0;i<n;i++){
        if(distance == abs(box[i]-mean)){
           printf("%d ",box[i]);
        }
    }
    return 0;
}
