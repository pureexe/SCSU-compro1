#include<stdio.h>
#include<limits.h>
void main(){
    int i=0,in,min=INT_MAX,max=INT_MIN;
    for(i=0; i<8; i++){
        scanf("%d",&in);
        if(in>0 && in>max){
            max = in;
        }
        if(in>0 && in<min){
            min = in;
        }
    }
    printf("%d\n%d",max,min);
}
