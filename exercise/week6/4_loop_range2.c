/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    while(x!=y){
        printf("%d ",x);
        if(x>y){
            x--;
        }else{
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
