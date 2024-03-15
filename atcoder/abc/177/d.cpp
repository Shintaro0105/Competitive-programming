#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m;cin>>n>>m;
    dsu uf(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        uf.merge(a,b);
    }
    int ans=0;
    rep(i,n){
        ans=max(ans,uf.size(i));
    }
    cout<<ans<<endl;
    return 0;
}