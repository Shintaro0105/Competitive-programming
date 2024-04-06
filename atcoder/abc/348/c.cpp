#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;cin>>n;
    vector<int> a(n),c(n);
    map<int,vector<int>> mp;
    rep(i,n){
        cin>>a[i]>>c[i];
        mp[c[i]].push_back(a[i]);
    }
    int ans=0;
    for(auto p:mp){
        sort(p.second.begin(),p.second.end());
        ans=max(ans,p.second[0]);
    }
    cout<<ans<<endl;
    return 0;
}