#include<stdio.h>
int main(){
    int currentCount=0,maxCount=0,stacking = 0,interest,input = 1;
    scanf("%d",&interest);
    while(1){
        scanf("%d",&input);
        if(!input){
            break;
        }
        if(input == interest){
            stacking++;
            currentCount++;
        }else{
            currentCount = 0;
        }
        if(maxCount < currentCount){
            maxCount = currentCount;
        }
    }
    printf("%d\n%d",maxCount,stacking);
    return 0;
}
