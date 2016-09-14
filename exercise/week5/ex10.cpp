/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
PROBLEM: Week5 - 10 no_divide_by_zero
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    if(z==0){
        printf("cannot divide by zero");
    }else{
        printf("%f",(x/z)+(y/z));
    }
    return 0;
}
