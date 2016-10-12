/*
Author: Pakkpon Phongthawee
LANG: C
Problem: moutain_top
*/
#include<stdio.h>
int tab[1001][1001],result[1000][3],resCnt=0;
int isHigh(int a,int b) {
    if(tab[a][b-1]>=tab[a][b])
        return 0;
    if(tab[a][b+1]>=tab[a][b])
        return 0;
    if(tab[a-1][b]>=tab[a][b])
        return 0;
    if(tab[a+1][b]>=tab[a][b])
        return 0;
    if(tab[a-1][b-1]>=tab[a][b])
        return 0;
    if(tab[a+1][b+1]>=tab[a][b])
        return 0;
    if(tab[a+1][b-1]>=tab[a][b])
        return 0;
    if(tab[a-1][b+1]>=tab[a][b])
        return 0;
    return 1;
}
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&tab[i][j]);
        }
    }
    for(i=1; i<n-1; i++) {
        for(j=1; j<n-1; j++) {
            if(isHigh(i,j)) {
                result[resCnt][0]=tab[i][j];
                result[resCnt][1]=i;
                result[resCnt][2]=j;
                resCnt++;
            }
        }
    }
    printf("%d\n",resCnt);
    for(i=0; i<resCnt; i++) {
        printf("%d %d %d\n",result[i][0],result[i][1],result[i][2]);
    }
    return 0;
}
