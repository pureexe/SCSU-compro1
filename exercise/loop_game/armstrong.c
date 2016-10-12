#include<stdio.h>
int main(){
    int a,b,i,n,j,digit,digitCnt,pow,x;
    scanf("%d %d",&i,&n);
    while(i<=n){
        //Find Digit length
        a = i;
        digit = 0;
        while(a>0){
            a/=10;
            digit++;
        }
        //Find Armstrong sum
        int sum = 0;
        a = i;
        while(a>0){
            for(pow = 1,x=0;x<digit;x++){
                pow*=a%10;
            }
            sum += pow;
            a/=10;
        }
        // Is it armstrong number
        if(sum == i){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
