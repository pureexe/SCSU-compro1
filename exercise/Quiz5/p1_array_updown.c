/*
Author: Pakkpon Phongthawee
LANG: C
Problem: array_updown
*/
#include<stdio.h>
int main(){
    int up=0,down=0,i,j,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&temp);
            if(j>i){
                up+=temp;
            }else if(j<i){
                down+=temp;
            }
        }
    }
    printf("%d\n%d",up,down);
    return 0;
}
