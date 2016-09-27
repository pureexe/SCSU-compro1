/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    int r,w,t;
    scanf("%d %d",&r,&w);
    t=(w/400);
    r+=t;
    w-=t*400;
    if(r>0&&w>0){
        printf("%d r %d w",r,w);
    }else if(r>0){
        printf("%d r",r);
    }else if(w>0){
        printf("%d w",w);
    }
    return 0;
}
