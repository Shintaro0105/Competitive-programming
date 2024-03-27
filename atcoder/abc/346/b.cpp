#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;s="wbwbwwbwbwbw";
    int w,b;cin>>w>>b;
    rep(i,12){
        int wcnt=0,bcnt=0;
        rep(j,w+b){
            if(s[(i+j)%12]=='w')wcnt++;
            else bcnt++;
        }
        if(wcnt==w&&bcnt==b){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}