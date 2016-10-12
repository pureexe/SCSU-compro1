/*
Author: Pakkpon Phongthawee
LANG: C
Problem: TeamCompetition
*/
#include<stdio.h>
int main(){
    int a[100000],b[100000],n,i,t1=0,t2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>b[i]){
            t1+=2;
        }else if(b[i]>a[i]){
            t2+=2;
        }else{
            t1++;
            t2++;
        }
    }
    if(t1>t2){
        printf("Team 1 wins\nScore %d to %d",t1,t2);
    }else if(t2>t1){
        printf("Team 2 wins\nScore %d to %d",t2,t1);
    }else{
        printf("Draw game\nScore %d to %d",t1,t2);
    }
    return 0;
}
