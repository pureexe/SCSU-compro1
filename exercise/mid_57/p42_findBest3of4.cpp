#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d,top = 0;
    while(true){
        cin >> a;
        if(a<0){
            break;
        }
        cin >> b >> c >> d;
        top = max(a+b+c+d-(min(min(min(a,b),c),d)),top);
    }
    cout << top;
    return 0;
}
