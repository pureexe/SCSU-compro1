/*
LANG: CPP
COMPILER: G++
*/
#include<iostream>
#include<sstream>
using namespace std;
stringstream out;

int main(){
    int cnt,accept,t1,t2,t3,c1=0,c2=0;
    cin >> cnt >> accept;
    for(int i=0;i<cnt;i++){
        cin >> t1 >> t2 >> t3;
        if(t2>8&&t3>8){
            if(t1 == 1){
                if(c1<accept){
                    c1++;
                    out << i+1 << " 1" << "\n";
                }else if(c2<accept){
                    c2++;
                    out << i+1 << " 2" << "\n";
                }
            }else{
                if(c2<accept){
                    c2++;
                    out << i+1 << " 2" << "\n";
                }else if(c1<accept){
                    c1++;
                    out << i+1 << " 1" << "\n";
                }
            }
        }else if(t2>8&&c1<accept){
            c1++;
            out << i+1 << " 1" << "\n";
        }else if(t3>8&&c2<accept){
            c2++;
            out << i+1 << " 2" << "\n";
        }
    }
    cout << out.str();
    return 0;
}
