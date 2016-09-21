#include<stdio.h>
int main(){
    int currentCount=0,maxCount=0,maxValue,currentValue,input = 1;
    while(1){
        scanf("%d",&input);
        if(!input){
            break;
        }
        if(input == currentValue){
            currentCount++;
        }else{
            if(maxCount < currentCount){
                maxCount = currentCount;
                maxValue = currentValue;
            }
            currentValue = input;
            currentCount = 1;
        }
    }
    printf("%d\n%d",maxCount,maxValue);
    return 0;
}
