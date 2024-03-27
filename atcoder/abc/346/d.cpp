#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll inf=1e18+1;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<ll> c(n);
    rep(i,n)cin>>c[i];
    vector dp(n+1,vector<vector<ll>>(2,vector<ll>(2,inf)));
    dp[0][0][0]=0;
    dp[0][1][0]=0;
    rep(i,n){
        if(s[i]=='0'){
            dp[i+1][0][0]=min(dp[i+1][0][0],dp[i][1][0]);
            dp[i+1][1][0]=min(dp[i+1][1][0],dp[i][0][0]+c[i]);
            if(i!=0){
                dp[i+1][0][1]=min(dp[i+1][0][1],dp[i][1][1]);
                dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][1][0]+c[i]);
                dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][0][1]+c[i]);
                dp[i+1][0][1]=min(dp[i+1][0][1],dp[i][0][0]);
            }
        }else{
            dp[i+1][0][0]=min(dp[i+1][0][0],dp[i][1][0]+c[i]);
            dp[i+1][1][0]=min(dp[i+1][1][0],dp[i][0][0]);
            if(i!=0){
                dp[i+1][0][1]=min(dp[i+1][0][1],dp[i][0][0]+c[i]);
                dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][1][0]);
                dp[i+1][0][1]=min(dp[i+1][0][1],dp[i][1][1]+c[i]);
                dp[i+1][1][1]=min(dp[i+1][1][1],dp[i][0][1]);
            }
        }
        //cout<<dp[i+1][0][0]<<' '<<dp[i+1][0][1]<<' '<<dp[i+1][1][0]<<' '<<dp[i+1][1][1]<<endl;
    }
    cout<<min(dp[n][0][1],dp[n][1][1])<<endl;
    return 0;
}