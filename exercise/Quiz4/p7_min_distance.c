/*
Author: Pakkpon Phongthawee
LANG: C
Problem: max_derivertive
*/
#include<stdio.h>
#include<limits.h>
int abs(int n){
    return (n<0)?-n:n;
}
int main(){
    int box[100000],i,n,distance=INT_MAX;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    for(i=0;i<n-1;i++){
        if(distance>abs(box[i+1]-box[i])){
            distance = abs(box[i+1]-box[i]);
        }
    }
    printf("%d",distance);
    return 0;
}
