/*
isUnique
*/
#include<stdio.h>
int isUnique(int* arData, int N){
    int i,j;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(arData[i]==arData[j]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int arr[10000],i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",isUnique(arr,N));
    return 0;
}
