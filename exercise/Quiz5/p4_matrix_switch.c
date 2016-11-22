/*
Author: Pakkpon Phongthawee
LANG: C
Problem: Matrix_switch
*/
#include<stdio.h>
int main(){
    int i,j,box[200][200],n,sw;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&box[i][j]);
        }
    }
    scanf("%d",&sw);
    if(sw == 1){
        for(i=0;i<n;i++){
            for(j=n/2;j<n;j++){
                printf("%d ",box[i][j]);
            }
            for(j=0;j<n/2;j++){
                printf("%d ",box[i][j]);
            }
            printf("\n");
        }
    }else{
        for(i=n/2;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",box[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<n/2;i++){
            for(j=0;j<n;j++){
                printf("%d ",box[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
