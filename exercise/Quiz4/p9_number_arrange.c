/*
Author: Pakkpon Phongthawee
LANG: C
Problem: number_arrange
*/
#include<stdio.h>
int box[1000000];
int main(){
    int n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    scanf("%d",&k);
    if(k==0){
        for(i=0;i<n;i++){
            printf("%d ",box[i]);
        }
    }else if(k==-1){
        for(i=n-1;i>=0;i--){
            printf("%d ",box[i]);
        }
    }else{
        for(i=n/2;i<n;i++){
            printf("%d ",box[i]);
        }
        for(i=0;i<n/2;i++){
            printf("%d ",box[i]);
        }
    }
    return 0;
}
