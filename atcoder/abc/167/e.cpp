#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

using mint = modint998244353;

const int MAX = 510000;
mint fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    const int MOD = mint::mod();
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i;
        inv[i] = MOD - inv[MOD%i] * (MOD / i);
        finv[i] = finv[i - 1] * inv[i];
    }
}

// 二項係数計算
mint COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * finv[k] * finv[n - k];
}

int main(){
    int n,m,k;cin>>n>>m>>k;
    COMinit();
    vector<mint> v(n,1);
    mint now=m;
    rep(i,n){
        v[n-1-i]=COM(n-1,i)*now;
        now*=m-1;
    }
    mint ans=0;
    rep(i,k+1){
        ans+=v[i];
        //cout<<v[i].val()<<endl;
    }
    cout<<ans.val()<<endl;
    return 0;
}