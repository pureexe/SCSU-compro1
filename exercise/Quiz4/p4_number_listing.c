/*
Author: Pakkpon Phongthawee
LANG: C
Problem:number_listing
*/
#include<stdio.h>
int main(){
    int i,j,n,update,box[5000],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }
    for(i=0;i<n;i++){
        update = 0;
        for(j=0;j<n-1;j++){
            if(box[j]>box[j+1]){
                temp = box[j];
                box[j] = box[j+1];
                box[j+1] = temp;
                update = 1;
            }
        }
        if(update == 0){
            break;
        }
    }
    int prev;
    for(i=0;i<n;i++){
        if(prev != box[i]){
            printf("%d ",box[i]);
            prev = box[i];
        }
    }
    return 0;
}
