#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    bool f=true;
    string s,t;cin>>s>>t;
    rep(i,n){
        bool b=false;
        if(s[i]==t[i])b=true;
        if((s[i]=='1'&&t[i]=='l')||(s[i]=='l'&&t[i]=='1'))b=true;
        if((s[i]=='0'&&t[i]=='o')||(s[i]=='o'&&t[i]=='0'))b=true;
        if(!b)f=false;
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}