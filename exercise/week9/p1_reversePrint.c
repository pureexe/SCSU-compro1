/*
Author: Pakkpon Phongthawee
LANG: C
Problem: ReversePrint
*/
#include<stdio.h>
int main(){
    int storage[10000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&storage[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",storage[i]);
    }
    return 0;
}
