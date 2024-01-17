#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;
    cin>>n;
    ll a[n];
    rep(i,n)cin>>a[i];
    ll ans=0;
    for(int i=1;i<=n;i++){
        vector dp(n+1,vector(i+1,vector<ll>(i,0)));
        dp[0][0][0]=1;
        rep(j,n){
            rep(k,i+1){
                rep(l,i){
                    if(i!=k){
                        dp[j+1][k+1][(l+a[j])%i]+=dp[j][k][l];
                        dp[j+1][k+1][(l+a[j])%i]%=mod;
                    }
                    dp[j+1][k][l]+=dp[j][k][l];
                    dp[j+1][k][l]%=mod;
                }
            }
        }
        ans+=dp[n][i][0];
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}