/*
Author: Pakkpon Phongthawee
LANG: C
Problem: sum_matrix_diff
*/
#include<stdio.h>
int n,a[100][100];
int main(){
    int i,j,t,sum=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            t=a[i][j]-a[j][i];
            sum+=t>0?t:-t;
        }
    }
    printf("%d",sum/2);
    return 0;
}
