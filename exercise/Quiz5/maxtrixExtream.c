#include<stdio.h>
#include<limits.h>
/*
2 3 5 8 9 7 3 2

*/
int box[50][50],height,width;
int getColumnMax(int col){
    int i,top = INT_MIN;
    for(i=0;i<height;i++){
        if(top<box[i][col]){
            top = box[i][col];
        }
    }
    return top;
}
int getRowMax(int row){
    int i,top = INT_MIN;
    for(i=0;i<width;i++){
        if(top<box[row][i]){
            top = box[row][i];
        }
    }
    return top;
}
int main(){
    int i,j,top;
    scanf("%d %d",&height,&width);
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            scanf("%d",&box[i][j]);
        }
    }
    for(i=0;i<width;i++){
        printf("%d ",getColumnMax(i));
    }
    printf("\n");
    for(i=0;i<height;i++){
        printf("%d ",getRowMax(i));
    }
    return 0;
}
