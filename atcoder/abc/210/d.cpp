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
const ll inf=1e15+1;

int main(){
    int h,w;
    ll c;
    cin>>h>>w>>c;
    ll a[h+1][w+1],b[h+1][w+1];
    rep(i,h)rep(j,w)cin>>a[i+1][j+1];
    rep(i,h)rep(j,w)b[i+1][w-j]=a[i+1][j+1];
    vector<vector<ll>> dp(h+1,vector<ll>(w+1,inf)),x(h+1,vector<ll>(w+1,inf));
    rep(i,h)rep(j,w){
        dp[i+1][j+1]=min(a[i+1][j+1],min(dp[i][j+1]+c,dp[i+1][j]+c));

    }
    rep(i,h)rep(j,w){
        x[i+1][j+1]=min(dp[i][j+1]+c+a[i+1][j+1],dp[i+1][j]+c+a[i+1][j+1]);
    }
    vector<vector<ll>> p(h+1,vector<ll>(w+1,inf)),y(h+1,vector<ll>(w+1,inf));
    rep(i,h)rep(j,w){
        p[i+1][j+1]=min(b[i+1][j+1],min(p[i][j+1]+c,p[i+1][j]+c));

    }
    rep(i,h)rep(j,w){
        y[i+1][j+1]=min(p[i][j+1]+c+b[i+1][j+1],p[i+1][j]+c+b[i+1][j+1]);
    }
    ll ans=inf;
    rep(i,h)rep(j,w){
        ans=min(ans,min(x[i+1][j+1],y[i+1][j+1]));
        //cout<<x[i+1][j+1]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}