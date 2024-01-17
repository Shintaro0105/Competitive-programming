#include <iostream>
#include <vector>
#include <cassert>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
const int MOD=998244353;

vector<long long> fact, fact_inv, inv;
/*  init_nCk :二項係数のための前処理
    計算量:O(n)
*/
void init_nCk(int SIZE=5*1e5) {
    fact.resize(SIZE + 5);
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
}
/*  nCk :MODでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(1)
*/
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    return fact[n] * (fact_inv[k] * fact_inv[n - k] % MOD) % MOD;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<bool> s(4*1e5+1,false);
    rep(i,n){
        cin>>a[i];
        s[a[i]]=true;
    }
    init_nCk();
    int need=1,res=0;
    rep(i,n+k){
        if(need>k)break;
        int rest=k-need;
        res+=nCk(rest+i,i);
        res%=MOD;
        if(!s[i]){
            need+=1;
        }
    }
    cout<<res<<endl;
    return 0;
}