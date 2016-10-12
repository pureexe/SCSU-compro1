/*
Author: Pakkpon Phongthawee
LANG: C
Problem: road_side_shop
*/
#include<stdio.h>
int main(){
    //QuickSum algorithm is good fro this problem
    //(https://en.wikipedia.org/wiki/Subset_sum_problem)
    int n,k,box[10000],i,temp,top=0,sum;
    scanf("%d %d",&n,&k);
    scanf("%d",&box[0]);
    for(i=1;i<n;i++){
        scanf("%d",&temp);
        box[i]=box[i-1]+temp;
    }
    top = box[k+k];
    for(i=k+1;i<n-k;i++){
        sum = box[i+k]-box[i-k-1];
        if(top<sum){
            top = sum;
        }
    }
    printf("%d",top);
    return 0;
}
