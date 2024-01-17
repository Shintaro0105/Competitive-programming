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
const ll inf=1e18;

int main(){
    int n;cin>>n;
    int a[n+1];
    rep(i,n)cin>>a[i+1];
    ll dp[n+1][2];
    ll ans=inf;
    rep(i,2){
        if(i==0){
            dp[1][0]=0;
            dp[1][1]=inf;
        }
        if(i==1){
            dp[1][0]=inf;
            dp[1][1]=a[1];
        }
        rep(j,n-1){
            dp[j+2][0]=dp[j+1][1];
            dp[j+2][1]=min(dp[j+1][0],dp[j+1][1])+a[j+2];
        }
        if(i==0)ans=min(ans,dp[n][1]);
        if(i==1)ans=min(ans,min(dp[n][0],dp[n][1]));
    }
    cout<<ans<<endl;
    return 0;
}
