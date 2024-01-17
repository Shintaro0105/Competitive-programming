#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[k];
    rep(i,k)cin>>a[i];
    vector dp(n+1,vector(2,vector<int>(2,0)));
    rep(i,n){
        rep(j,k){
            if(a[j]<=i+1){
                dp[i+1][0][0]=max(dp[i+1][0][0],dp[i+1-a[j]][1][0]+a[j]);
                if(dp[i+1][0][0]==dp[i+1-a[j]][1][0]+a[j])dp[i+1][0][1]=dp[i+1-a[j]][1][1];
                dp[i+1][1][1]=max(dp[i+1][1][1],dp[i+1-a[j]][0][1]+a[j]);
                if(dp[i+1][1][1]==dp[i+1-a[j]][0][1]+a[j])dp[i+1][1][0]=dp[i+1-a[j]][0][0];
            }
        }
    }
    cout<<dp[n][0][0]<<endl;
    return 0;
}