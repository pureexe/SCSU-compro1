#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int in[3],n,i,sum[] = {0,0,0,0},cnt[] = {0,0,0,0},remainSpace;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> in[0] >> in[1] >> in[2];
        sort(in,in+3);
        if(in[0]<=8  && in[1]<=10 && in[2]<=15){
            sum[1]+=  8*10*15 - in[0]*in[1]*in[2];
            cout << 1 << "\n";
            cnt[1]++;
        }else if(in[0]<=12 && in[1]<=15 && in[2]<=25){
            sum[2]+=  12*15*25 - in[0]*in[1]*in[2];
            cout << 2 << "\n";
            cnt[2]++;
        }else if(in[0]<=20 && in[1]<=40 && in[2]<=50){
            sum[3]+=  20*40*50 - in[0]*in[1]*in[2];
            cout << 3 << "\n";
            cnt[3]++;
        }else{
            cout << "Oversize product\n" ;
        }
    }
    cout << cnt[1] << " " << sum[1] << "\n" << cnt[2] << " " << sum[2] << "\n" << cnt[3] << " " << sum[3] << "\n";
    return 0;
}
