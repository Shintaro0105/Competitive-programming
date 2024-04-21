#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m),b(m),c(k),d(k);
    dsu uf(n);
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--;b[i]--;
        uf.merge(a[i],b[i]);
    }
    rep(i,k){
        cin >> c[i] >> d[i];
        c[i]--;d[i]--;
    }
    vector<int> ans(n,0);
    rep(i,n)ans[i]=uf.size(i)-1;
    vector<set<int>> s(n);
    rep(i,m){
        ans[a[i]]--;
        ans[b[i]]--;
        s[a[i]].insert(b[i]);
        s[b[i]].insert(a[i]);
    }
    rep(i,k){
        if(!s[c[i]].count(d[i])&&uf.same(c[i],d[i])){
            ans[c[i]]--;
            ans[d[i]]--;
        }
    }
    rep(i,n)cout << ans[i] << ' ';
    cout << endl;
    return 0;
}