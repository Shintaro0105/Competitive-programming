#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    vector dp(n+1,vector<ll>(m+1,1e18+1));
    dp[0][0]=0;
    rep(i,n+1){
        rep(j,m+1){
            if(i>0){
                dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
            }
            if(j>0){
                dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            }
            if(i>0&&j>0){
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+ll((a[i-1]==b[j-1])?0:1));
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}