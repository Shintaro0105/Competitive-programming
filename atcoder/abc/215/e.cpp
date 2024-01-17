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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int MOD=998244353;

int main(){
    int n;
    string s;
    cin>>n>>s;
    const int m=10;
    const int m2=1<<m;
    vector dp(m2,vector<ll>(m));
    for(char c:s){
        int a=c-'A';
        for(int s = m2-1;s>=0;s--)rep(i,m)if(s>>i&1){
            if(i==a){
                dp[s][i]+=dp[s][i];
                dp[s][i]%=MOD;
            }
            else if (~s>>a&1){
                dp[s|1<<a][a]+=dp[s][i];
                dp[s|1<<a][a]%=MOD;
            }
        }
        dp[1<<a][a]+=1;
        dp[1<<a][a]%=MOD;
    }
    ll ans=0;
    rep(s,m2)rep(i,m){
        ans+=dp[s][i];
        ans%=MOD;
    }
    cout<<ans<<endl;
    return 0;
}