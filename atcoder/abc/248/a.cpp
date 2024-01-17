#include <iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(){
    string s;
    cin>>s;
    bool f[10];
    rep(i,10){
        f[i]=true;
    }
    for(char c:s){
        int i=c-'0';
        f[i]=false;
    }
    rep(i,10){
        if(f[i]){
            cout<<i<<endl;
            return 0;
        }
    }
}