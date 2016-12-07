/*
Author: Pakkpon Phongthawee
LANG: C
Problem: SumRowCol
*/
#include<stdio.h>
int main(){
    int row,col,sum=0,style,target,i,j,temp;
    scanf("%d %d %d %d",&row,&col,&style,&target);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&temp);
            if(style == 0 && i == target){
                sum+=temp;
            }else if(style == 1 && j == target){
                sum+=temp;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
