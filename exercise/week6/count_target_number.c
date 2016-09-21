#include<stdio.h>
int main(){
    int currentCount=0,interest,input = 1;
    scanf("%d",&interest);
    while(1){
        scanf("%d",&input);
        if(!input){
            break;
        }
        if(input == interest){
            currentCount++;
        }
    }
    if(currentCount){
        printf("%d",currentCount);
    }else{
        printf("None");
    }
    return 0;
}
