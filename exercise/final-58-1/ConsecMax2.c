/*
Author: Pakkpon Phongthawee
LANG: C
Problem: ConsecMax
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int box[10],i,top=INT_MIN,temp,j;
    for(i=0;i<10;i++){
        scanf("%d",&box[i]);
    }
    for(i=0;i<8;i++){
        temp = 0;
        for(j=0;j<3;j++){
            temp+=box[i+j];
        }
        if(temp>top){
            top = temp;
        }
    }
    printf("%d",top);
    return 0;
}
