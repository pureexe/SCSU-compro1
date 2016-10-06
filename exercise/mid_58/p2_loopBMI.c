#include<stdio.h>
int main(){
    double w,h;
    while(1){
        scanf("%lf %lf",&w,&h);
        if(w<=0||h<=0){
            break;
        }
        h/=100;
        printf("%.2f\n",w/(h*h));
    }
    return 0;
}
