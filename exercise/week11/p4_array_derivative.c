/*
problem: array_derivative
*/
#include<stdio.h>
void derivative(int* AInput, int* AOutput, const int N){
    int i;
    AOutput[0]=0;
    for(i=1;i<N;i++){
        AOutput[i] = AInput[i] - AInput[i-1];
    }
}
int main(){
    int arr[100],result[100],i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    derivative(arr,result,N);
    for(i=0;i<N;i++){
        printf("%d ",result[i]);
    }
    return 0;
}
