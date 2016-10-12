/*
Author: Pakkpon Phongthawee
LANG: C
Problem: AsteriskBurst
*/
#include<stdio.h>
int main(){
    int m,n,i,j,c=1;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
