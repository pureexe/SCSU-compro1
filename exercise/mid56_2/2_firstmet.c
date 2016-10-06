/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        scanf("%d",&c);
        if(c<0){
            printf("%d",c);
            break;
        }
        if(!(c%a)&&!(c%b)){
            printf("%d\n2",c);
            break;
        }else if(!(c%a)){
            printf("%d\n0",c);
            break;
        }else if(!(c%b)){
            printf("%d\n1",c);
            break;
        }
    }
    return 0;
}
