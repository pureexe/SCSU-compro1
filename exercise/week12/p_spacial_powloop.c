#include<stdio.h>
int semiPow(int a,int b){
    int sum=1;
    while(b-->0)sum*=a;
    return sum;
}
int main(){
    int data[100],n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++){
        printf("%d ",semiPow(data[i],x));
    }
    return 0;
}
