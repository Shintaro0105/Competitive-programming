#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
const int inf=1e9+1;

int main(){
    int n,s,m,l;cin>>n>>s>>m>>l;
    vector<int> dp(n+12,inf);
    dp[0]=0;
    rep(i,n){
        dp[i+6]=min(dp[i+6],dp[i]+s);
        dp[i+8]=min(dp[i+8],dp[i]+m);
        dp[i+12]=min(dp[i+12],dp[i]+l);
    }
    int ans=inf;
    rep(i,12){
        ans=min(ans,dp[i+n]);
    }
    cout<<ans<<endl;
    return 0;
}