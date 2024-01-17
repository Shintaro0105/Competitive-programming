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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll MOD = 1000000007;
bitset<100001> a;


int main(){
    int n,m;cin>>n>>m;
    rep(i,n+2)a[i]=1;
    rep(i,m){
        int b;cin>>b;
        a[b]=0;
    }
    ll dp[n+1];
    dp[0]=0;
    if(a[1])dp[1]=1;
    else {
        dp[2]=1;dp[1]=0;
    }
    if(a[2]) dp[2]=dp[1]+1;
    else dp[2]=0;
    for(int i=3;i<=n;i++){
        if(a[i])dp[i]=dp[i-1]+dp[i-2];
        else dp[i]=0;
        dp[i]%=MOD;
    }
    cout<<dp[n]<<endl;
}