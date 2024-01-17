#include <iostream>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int c;cin>>c;
    int n=0,m=0,l=0;
    rep(i,c){
        int s[3];
        cin>>s[0]>>s[1]>>s[2];
        sort(s,s+3);
        n=max(n,s[0]);
        m=max(m,s[1]);
        l=max(l,s[2]);
    }
    cout<<n*m*l<<endl;
    return 0;
}