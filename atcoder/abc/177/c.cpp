#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint=modint1000000007;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    vector<mint> s(n+1,0);
    rep(i,n){
        cin>>a[i];
        s[i+1]=s[i]+a[i];
    }
    mint ans=0;
    rep(i,n){
        ans+=(s[n]-s[i+1])*a[i];
    }
    cout<<ans.val()<<endl;
    return 0;
}