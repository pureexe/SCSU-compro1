/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Disibility Count
*/
#include<stdio.h>
int main(){
    int a,b,c,fmet = 0,c1=0,c2=0;
    scanf("%d %d",&a,&b);
    while(1){
        scanf("%d",&c);
        if(c<=0){
            break;
        }
        if(!(c%a)&&!(c%b)){
            if(!fmet){
                fmet = 1;
            }
            c1++;
            c2++;
        }else if(!(c%a)){
            if(!fmet){
                fmet = 2;
            }
            c1++;
        }else if(!(c%b)){
            if(!fmet){
                fmet = 3;
            }
            c2++;
        }
    }
    if(fmet == 1){
        printf("%d\n%d\nxy",c1,c2);
    }else if(fmet == 2){
        printf("%d\n%d\nx",c1,c2);
    }else{
        printf("%d\n%d\ny",c1,c2);
    }
    return 0;
}
