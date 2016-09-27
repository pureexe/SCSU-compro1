#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int s,a,b,c,d,top = 0,oldtop,bs;
    while(true){
        cin >> s;
        if(s<0){
            break;
        }
        cin >> a >> b >> c >> d;
        oldtop = top;
        top = max(a+b+c+d-(min(min(min(a,b),c),d)),top);
        if(oldtop != top){
            bs = s;
        }
    }
    cout << bs << "\n" << top;
    return 0;
}
