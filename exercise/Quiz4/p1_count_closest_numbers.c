/*
Author: Pakkpon Phongthawee
LANG: C
Problem: count_closest_numbers

*/
#include<stdio.h>
#include<limits.h>
int abs(int in){
    if(in<0){
        return -in;
    }else{
        return in;
    }
}
int main(){
    int n,i,target,distance=INT_MAX,tempDistance,count,data[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        tempDistance = abs(data[i]-target);
        if(tempDistance < distance){
            distance = tempDistance;
            count = 1;
        }else if(tempDistance == distance){
            count++;
        }
    }
    printf("%d\n%d",distance,count);
    return 0;
}
