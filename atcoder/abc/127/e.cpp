#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <cassert>
using namespace std;
using ll = long long int;

const int MOD = 1e9+7;
//簡略化を考える問題

//組み合わせ

vector<long long> fact_inv, inv;

/*  init_nCk :二項係数のための前処理
    計算量:O(k)
*/
void init_nCk(int SIZE) {
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
}

/*  nCk :MODでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(k)
*/
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    long long ans = 1;
    for (int i = n; i >= n - k + 1; i--) {
        ans *= i;
        ans %= MOD;
    }
    return ans * fact_inv[k] % MOD;
}

int main(){
    ll n,m,k;cin >> n >> m >> k;
    ll ans=0;
    //xの差
    for(int i=0;i<m;i++){
        ans += i*(m-i)*(n*n);
    }

    for(int i=0;i<n;i++){
        ans += i*(n-i)*(m*m);
    }
    init_nCk(k-2);
    ans %= MOD;
    //xの差の総和とその足される数の積
    ans *= nCk(n*m-2,k-2);
    ans %= MOD;
    printf("%lld\n",ans);

}