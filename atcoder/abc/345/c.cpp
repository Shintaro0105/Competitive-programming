#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;cin>>s;
    ll n=s.size();
    ll ans=n*(n-1)/2;
    vector<ll> cnt(26,0);
    rep(i,n){
        cnt[s[i]-'a']++;
    }
    bool flag=false;
    rep(i,26){
        ans-=cnt[i]*(cnt[i]-1)/2;
        if(cnt[i]>1)flag=true;
    }
    if(flag)ans++;
    cout<<ans<<endl;
    return 0;
}