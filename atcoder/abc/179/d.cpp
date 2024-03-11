#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint998244353;

mint op(mint a,mint b){
    return a+b;
}

mint e(){
    return 0;
}

mint mapping(mint x, mint y){
    return x+y;
}

mint composition(mint x, mint y){
    return x+y;
}

mint id(){
    return 0;
}

int main(){
    int n,k;cin>>n>>k;
    lazy_segtree<mint,op,e,mint,mapping,composition,id> seg(n);
    vector<int> l(k),r(k);
    rep(i,k)cin>>l[i]>>r[i],r[i]++;
    seg.set(0,1);
    rep(i,n){
        rep(j,k){
            seg.apply(min(i+l[j],n),min(i+r[j],n),seg.get(i));
        }
    }
    cout<<seg.get(n-1).val()<<endl;
    return 0;
}