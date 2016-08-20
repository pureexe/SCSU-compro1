/*
LANG: CPP
COMPILER: G++
NOTE: Require C++11
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> orderList;
    int worker,order,input,day=1,quota=0;
    cin >> worker >> order;
    worker = worker * 100;
    for(int i=0;i<order;i++){
        cin >> input;
        orderList.push_back(input);
    }
    for(int job:orderList){
        while(job>0){
            if(job>worker-quota){
                day++;
                job-=worker-quota;
                quota=0;
            }else{
                quota += job;
                job = 0;
                cout << day <<"\n";
            }
        }
    }
}
