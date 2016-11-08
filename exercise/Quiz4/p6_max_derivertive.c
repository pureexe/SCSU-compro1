/*
Author: Pakkpon Phongthawee
LANG: C
Problem: max_derivertive
*/
#include<stdio.h>
int main(){
    int box[100000],i,n,distance=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    for(i=0;i<n-1;i++){
        if(distance<box[i+1]-box[i]){
            distance = box[i+1]-box[i];
        }
    }
    printf("%d",distance);
    return 0;
}
