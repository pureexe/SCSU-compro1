/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("Invalid input");
    }else{
        while(x!=y){
            printf("%d ",x);
            x++;
        }
        printf("%d",x);
    }
    return 0;
}
