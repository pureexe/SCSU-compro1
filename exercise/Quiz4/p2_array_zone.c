/*
Author: Pakkpon Phongthawee
LANG: C
Problem: array_zone
*/
#include<stdio.h>
int data[1000][1000];
int main(){
    int i,j,r,c,sum[4]={0};
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<r/2;i++){
        for(j=0;j<c/2;j++){
            sum[0]+=data[i][j];
        }
    }
    for(i=0;i<r/2;i++){
        for(j=c/2;j<c;j++){
            sum[1]+=data[i][j];
        }
    }
    for(i=r/2;i<r;i++){
        for(j=0;j<c/2;j++){
            sum[2]+=data[i][j];
        }
    }
    for(i=r/2;i<r;i++){
        for(j=c/2;j<c;j++){
            sum[3]+=data[i][j];
        }
    }
    printf("%d %d\n%d %d",sum[0],sum[1],sum[2],sum[3]);
    return 0;
}
