/*
Author: Pakkapon Phongthawee
Copyright all reserved (2016)
LANG: CPP
*/
#include<iostream>
using namespace std;
int main(){
    int x,y,z,bag[3],m;
    cin >> x >> y >> z;
    bag[0] = x/3;
    bag[1] = y/4;
    bag[2] = z/2;
    m = min(bag[0],min(bag[1],bag[2]));
    cout << m << " " << x-(3*m) << " "<< y-(4*m) << " "<< z-(2*m);
    return 0;
}
