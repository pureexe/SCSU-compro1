#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    if(n<1||n>99){
        printf("Number is out of range");
    }else{
        for(i=1;i<=12;i++){
            if(n*12/1000){
                printf("%d x %2d = %4d\n",n,i,n*i);
            }else if(n*12/100){
                printf("%d x %2d = %3d\n",n,i,n*i);
            }else if(n*12/10){
                printf("%d x %2d = %2d\n",n,i,n*i);
            }else{
                printf("%d x %2d = %1d\n",n,i,n*i);
            }
        }
    }
    return 0;
}
