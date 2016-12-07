#include<stdio.h>
int map[100][100];
int main(){
    int height,width,point,i,a,b,j;
    scanf("%d %d %d",&height,&width,&point);
    for(i=1;i<=point;i++){
        scanf("%d %d",&a,&b);
        map[a-1][b-1] = i;
    }
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
