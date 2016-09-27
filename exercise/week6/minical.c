/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    char worker = '\n';
    long int storage = 0,in;
    while(1){
        scanf(" %c",&worker);
        if(worker == '.'){
            break;
        }
        scanf("%d",&in);
        if(worker == '+'){
            storage += in;
        }else if(worker == '-'){
            storage -= in;
        }else if(worker == '*'){
            storage *= in;
        }else if(worker == '/'){
            storage /= in;
        }
        printf("%d\n",storage);
    }
    printf("Goodbye!");
    return 0;
}
