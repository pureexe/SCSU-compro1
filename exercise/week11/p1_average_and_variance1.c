/*
problem: average_and_variance1
*/
#include<stdio.h>
double average(int* array){
    double sum=0;
    int i;
    for(i=0;i<8;i++){
        sum+=array[i];
    }
    return sum/8;
}
double variance(int* array, double avg){
    double sum=0;
    int i;
    for(i=0;i<8;i++){
        sum+=(array[i]-avg)*(array[i]-avg);
    }
    return sum/7;
}
int main(){
    int a[8],i;
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    double avg = average(a);
    printf("%.2f %.2f",avg,variance(a,avg));
}
