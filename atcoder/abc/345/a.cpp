#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;cin>>s;
    int n=s.size();
    bool flag=true;
    if(s[0]!='<')flag=false;
    if(s[n-1]!='>')flag=false;
    for(int k=1;k<n-1;k++){
        if(s[k]!='=')flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}