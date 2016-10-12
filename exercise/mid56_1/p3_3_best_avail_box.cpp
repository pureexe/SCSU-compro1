#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int in[3],n,i,sum[] = {0,0,0,0},cnt[] = {0,0,0,0},remain[4],cType;
    cin >> n;
    cin >> remain[1] >> remain[2] >> remain[3];
    for(i=0;i<n;i++){
        cin >> in[0] >> in[1] >> in[2];
        sort(in,in+3);
        if(in[0]<=8  && in[1]<=10 && in[2]<=15){
            cType = 1;
        }else if(in[0]<=12 && in[1]<=15 && in[2]<=25){
            cType = 2;
        }else if(in[0]<=20 && in[1]<=40 && in[2]<=50){
            cType = 3;
        }else{
            cType = 4;
        }
        if(cType<=1 && remain[1]>0){
            cout << "1\n";
            remain[1]--;
        }else if(cType<=2 && remain[2]>0){
            cout << "2\n";
            remain[2]--;
        }else if(cType <=3 && remain[3]>0){
            cout << "3\n";
            remain[3]--;
        }else if(cType == 4){
            cout << "Oversize product\n" ;
        }else{
            cout << "Box not available\n";
        }
    }
    return 0;
}
