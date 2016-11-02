/*
problem: average_and_variance1
*/
#include<stdio.h>
double average(int* array,int N){
    double sum=0;
    int i;
    for(i=0;i<N;i++){
        sum+=array[i];
    }
    return sum/N;
}
double variance(int* array, double avg,int N){
    double sum=0;
    int i;
    for(i=0;i<N;i++){
        sum+=(array[i]-avg)*(array[i]-avg);
    }
    return sum/(N-1);
}
int main(){
    int a[100],i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    double avg = average(a,N);
    printf("%.2f %.2f",avg,variance(a,avg,N));
}
