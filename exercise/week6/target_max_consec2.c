#include<stdio.h>
int main(){
    int currentCount=0,maxCount=0,interest,input = 1;
    scanf("%d",&interest);
    while(1){
        scanf("%d",&input);
        if(!input){
            break;
        }
        if(input == interest){
            currentCount++;
        }else{
            currentCount = 0;
        }
        if(maxCount < currentCount){
            maxCount = currentCount;
        }
    }
    printf("%d",maxCount);
    return 0;
}
