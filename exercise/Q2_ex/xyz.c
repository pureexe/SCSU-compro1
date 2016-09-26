/*
Author: Pakkpon Phongthawee
LANG: C
Problem: XYZ
*/
#include<stdio.h>
int main(){
    int i,x,y,z,round;
    scanf("%d",&round);
    for(i=0;i<round;i++){
        scanf("%d %d %d",&x,&y,&z);
        if(x == y && y == z){
            printf("xyz\n");
        }else if(x == y){
            printf("xy\n");
        }else if(x == z){
            printf("xz\n");
        }else if(y == z){
            printf("yz\n");
        }else if(x>y && x>z){
            printf("x\n");
        }else if(y>x && y>z){
            printf("y\n");
        }else if(z>y && z>x){
            printf("z\n");
        }
    }
    return 0;
}
