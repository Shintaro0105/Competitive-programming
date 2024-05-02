#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(m),b(m),c(n,0);
    dsu uf(n);
    rep(i,m){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
        uf.merge(a[i],b[i]);
        c[a[i]]++;
        c[b[i]]++;
    }
    auto res = uf.groups();
    ll ans=0;
    for(auto v:res){
        ll s=v.size();
        ll sum=0;
        for(auto x:v){
            sum+=c[x];
        }
        ans+=s*(s-1)/2-sum/2;
    }
    cout << ans << endl;
    return 0;
}