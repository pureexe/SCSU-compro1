/*
Author: Pakkpon Phongthawee
LANG: C
Problem: CarParkMap
*/
#include<stdio.h>
int image[100][100];
int main(){
    int width,height,length,i,j,x,y;
    scanf("%d %d %d",&height,&width,&length);
    for(i=0;i<length;i++){
        scanf("%d %d",&x,&y);
        image[x-1][y-1]=1;
    }
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            if(image[i][j]==1){
                printf("x");
            }else{
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
