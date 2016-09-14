/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
PROBLEM: grading
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a>79){
        cout << "Excellent";
    }else if(a > 39){
        cout << "Pass";
    }else{
        cout << "Fail";
    }
    return 0;
}
