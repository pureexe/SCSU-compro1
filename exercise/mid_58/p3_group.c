#include<stdio.h>
int a,b,c,d;
int main(){
    int i,n;
    double in;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&in);
        if(in < 18.5){
            a++;
        }else if(in <= 23.5 && in >= 18.5){
            b++;
        }else if(in <= 30.0 && in > 23.5){
            c++;
        }else{
            d++;
        }
    }
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}
