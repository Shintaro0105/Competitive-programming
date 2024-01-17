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
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int MOD = 998244353;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<int>> to(n);
    rep(i,m){
        int a, b;cin>>a>>b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<ll> dp(n);
    dp[0]=1;
    rep(ki,k){
        vector<ll> p(n);
        int tot=0;
        swap(dp,p);
        rep(i,n){
            tot += p[i]%MOD;
            tot %= MOD;
        } 
        rep(i,n){
            dp[i]=tot;
            for(int u : to[i]){
                dp[i] -= p[u]%MOD;
                dp[i] %= MOD;
            } 
            dp[i] -= p[i]%MOD;
            dp[i] %= MOD;
        }
    }
    dp[0]+=MOD;
    dp[0]%=MOD;
    cout<<dp[0]<<endl;
    return 0;
}