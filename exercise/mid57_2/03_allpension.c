/*
Author: Pakkpon Phongthawee
LANG: C
Problem: allpension
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int a,b,maxA = INT_MIN, minB = INT_MAX,sumA = 0,sumB = 0;
    while(1){
        scanf("%d %d",&a,&b);
        if(!a&&!b){
            break;
        }
        if(a == 1){
            sumA+=b;
            if(b>maxA){
                maxA = b;
            }
        }else if(a == 2){
            sumB+= b;
            if(b<minB){
                minB = b;
            }
        }
    }
    printf("%d\n%d\n%d\n%d",sumA,sumB,maxA,minB);
    return 0;
}
