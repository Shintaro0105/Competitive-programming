#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

bool ok(char a,char b){
    if(a=='?'||b=='?'||a==b)return true;
    else return false;
}

int main(){
    string s,t;
    cin>>s>>t;
    vector<bool> f(t.size()+1,false),b(t.size()+1,false);
    f[0]=true;
    rep(i,t.size()){
        if(!ok(s[i],t[i]))break;
        f[i+1]=true;
    }
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    b[0]=true;
    rep(i,t.size()){
        if(!ok(s[i],t[i]))break;
        b[i+1]=true;
    }
    rep(i,t.size()+1){
        if(f[i]&&b[t.size()-i])cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}