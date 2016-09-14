/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
PROBLEM: modulo_and_printf
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a%3==0&&a%5==0){
        cout << "3 5";
    }else if(a%3 ==0){
        cout << "3";
    }else if(a%5 == 0){
        cout << "5";
    }
    return 0;
}
