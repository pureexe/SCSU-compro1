/*
Author: Pakkpon Phongthawee
LANG: C
Problem: NumberStairs2
*/
#include<stdio.h>
int main(){
    int box[100000],n=0,i,j;
    while(1){
        scanf("%d",&box[n]);
        if(box[n]<0||box[n]>9){
            break;
        }
        n++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d",box[i]);
        }
        printf("\n");
    }
    return 0;
}
