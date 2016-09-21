#include<stdio.h>
int main(){
    int currentCount=0,maxCount=0,interest,input = 47541521465,prev = 0;
    scanf("%d",&interest);
    while(1){
        prev = input;
        scanf("%d",&input);
        if(!input){
            break;
        }
        if(input == interest){
            currentCount++;
        }else{
            if(maxCount < currentCount && prev == interest){
                maxCount = currentCount;
            }
            currentCount = 1;
        }
    }
    printf("%d",maxCount);
    return 0;
}
