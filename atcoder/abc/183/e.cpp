#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint1000000007;

int main(){
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    vector dp(h,vector<mint>(w,0));
    vector x(h,vector<mint>(w,0)),y(h,vector<mint>(w,0)),z(h,vector<mint>(w,0));
    dp[0][0]=1;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'||(i==0&&j==0))continue;
            if(j>0){
                x[i][j]=x[i][j-1]+dp[i][j-1];
            }
            if(i>0){
                y[i][j]=y[i-1][j]+dp[i-1][j];
            }
            dp[i][j]=x[i][j]+y[i][j]+z[i][j]-1;
            if(i>0&&j>0){
                z[i][j]=z[i-1][j-1]+dp[i-1][j-1];
            }
            dp[i][j]=x[i][j]+y[i][j]+z[i][j];
            //cout<<i<<' '<<j<<' '<<dp[i][j].val()<<endl;
        }
    }
    cout<<dp[h-1][w-1].val()<<endl;
    return 0;
}