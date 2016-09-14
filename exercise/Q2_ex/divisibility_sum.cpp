/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
PROBLEM: divisibility_sum)
*/
#include<iostream>
using namespace std;
int main(){
    int i = 1,a = 0,b = 0,c = 0,x,y;
    cin >> x  >> y;
    while(i>0){
        cin >> i;
        a+=(!(i%x)&&(i%y))?i:0;
        b+=((i%x)&&!(i%y))?i:0;
        c+=(!(i%x)||!(i%y))?i:0;
    }
    cout << a << "\n" << b << "\n" << c;
    return 0;
}
