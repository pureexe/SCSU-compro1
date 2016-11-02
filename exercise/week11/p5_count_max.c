/*
count_max
*/
#include<stdio.h>
#include<limits.h>
int countMax(int* arData, int N){
    int i,c=0,m=INT_MIN;
    for(i=0;i<N;i++){
        if(arData[i]>m){
            m = arData[i];
            c = 1;
        }else if(arData[i] == m){
            c++;
        }
    }
    return c;
}
int main(){
    int i,n,arr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countMax(arr,n));
    return 0;
}
