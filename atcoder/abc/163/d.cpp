#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint=modint1000000007;

int main(){
    int n,k;cin>>n>>k;
    vector<mint> v(n+2,0);
    rep(i,n){
        v[i+2]=v[i+1]+i+1;
        //cout<<v[i+1].val()<<endl;
    }
    mint ans=0;
    for(int i=k;i<=n+1;i++){
        ans+=v[n+1]-v[n+1-i]-v[i]+1;
    }
    cout<<ans.val()<<endl;
    return 0;
}