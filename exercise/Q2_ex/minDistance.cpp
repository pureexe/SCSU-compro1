/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
*/
#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,s = 2000000000;
    while(true){
        cin >> a >> b;
        if(!a&&!b){
            break;
        }
        s = (b-a<s)?b-a:s;
    }
    cout << s;
    return 0;
}
