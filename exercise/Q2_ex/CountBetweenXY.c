#include<stdio.h>
int main(){
    int x,y,i=1,c=0,t;
    scanf("%d %d",&x,&y);
    if(x>y){
        t = x;
        x = y;
        y = t;
    }
    while(i>0){
        scanf("%d",&i);
        c+=(x<=i&&i<=y)?1:0;
    }
    printf("%d",c);
    return 0;
}
