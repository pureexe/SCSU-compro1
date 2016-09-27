/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    char worker;
    long long int storage = 0,in;
    while(1){
        scanf(" %c",&worker);
        if(worker == '.'){
            break;
        }
        scanf("%lld",&in);
        if(worker == '+'){
            storage += in;
        }else if(worker == '-'){
            storage -= in;
        }else if(worker == '*'){
            storage *= in;
        }else if(worker == '/'){
            storage /= in;
        }
        printf("%lld\n",storage);
    }
    printf("Goodbye!");
    return 0;
}
