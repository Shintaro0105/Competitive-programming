#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;cin>>s;
    vector<int> c(26,0);
    rep(i,s.size()) c[s[i]-'a']++;
    bool flag=true;
    map<int,int> mp;
    rep(i,26){
        if(c[i]!=0)mp[c[i]]++;
    }
    for(auto x:mp){
        if(x.second!=2)flag=false;
        //cout<<x.second<<endl;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}