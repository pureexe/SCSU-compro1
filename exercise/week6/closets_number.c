/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    int x,in,close=INT_MAX,s,i;
    scanf("%d",&x);
    for(i=0;i<8;i++){
        scanf("%d",&in);
        if(fabs(x - in)<close){
            s = in;
            close = fabs(x - in);
        }
    }
    printf("%d",s);
    return 0;
}
