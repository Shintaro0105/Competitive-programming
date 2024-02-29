#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    vector dp(n+1,vector<ll>(2,0));
    dp[0][0]=1;
    dp[0][1]=1;
    rep(i,n){
        if(s[i]=="AND"){
            dp[i+1][0]=2*dp[i][0]+dp[i][1];
            dp[i+1][1]=dp[i][1];
        }else{
            dp[i+1][0]=dp[i][0];
            dp[i+1][1]=2*dp[i][1]+dp[i][0];
        }
    }
    cout<<dp[n][1]<<endl;
    return 0;
}