/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int min(int a,int b){
    return (a<b)?a:b;
}
int main(){
    int s,a,b,c,d,cnt=1,top=-1,point,bs;
    while(1){
        scanf("%d",&s);
        if(s<0){
            break;
        }
        scanf("%d %d %d %d",&a,&b,&c,&d);
        point = a+b+c+d-(min(min(min(a,b),c),d));
        if(top == point){
            cnt++;
        }else if(top<point){
            bs = s;
            top = point;
            cnt = 1;
        }
    }
    if(cnt-1){
        printf("%d*\n%d",cnt,top);
    }else{
        printf("%d\n%d",bs,top);

    }
    return 0;
}
