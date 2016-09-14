/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
*/
#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,s = 0;
    while(a != 0 || b != 0){
        cin >> a >> b;
        s = (b-a>s)?b-a:s;

    }
    cout << s;
    return 0;
}
