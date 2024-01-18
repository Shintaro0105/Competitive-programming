#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    bool pr=true,su=true;
    rep(i,n){
        if(s[i]!=t[i])pr=false;
    }
    rep(i,n){
        if(s[i]!=t[m-n+i])su=false;
    }
    if(pr&&su)cout<<0<<endl;
    else if(pr&&!su)cout<<1<<endl;
    else if(!pr&&su)cout<<2<<endl;
    else cout<<3<<endl;
    return 0;
}