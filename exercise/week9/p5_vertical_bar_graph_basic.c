/*
Author: Pakkpon Phongthawee
LANG: C
Problem: vertical_bar_graph_basic
*/
#include<stdio.h>
int main(){
    int n,i,box[100],bound=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
        if(box[i]>bound){
            bound = box[i];
        }
    }
    for(i=bound;i>0;i--){
        for(j=0;j<n;j++){
            if(box[j]>=i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
