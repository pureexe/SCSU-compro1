#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int in[3];
    cin >> in[0] >> in[1] >> in[2];
    sort(in,in+3);
    if(in[0]<=8  && in[1]<=10 && in[2]<=15){
        cout << "1\n" << 8*10*15 - in[0]*in[1]*in[2] ;
    }else if(in[0]<=12 && in[1]<=15 && in[2]<=25){
        cout << "2\n" << 12*15*25 - in[0]*in[1]*in[2] ;
    }else if(in[0]<=20 && in[1]<=40 && in[2]<=50){
        cout << "3\n" << 20*40*50 - in[0]*in[1]*in[2] ;
    }else{
        cout << "Oversize product\n" << in[0]*in[1]*in[2] - 50*40*20 ;
    }
}
