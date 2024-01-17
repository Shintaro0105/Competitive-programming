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
const ll INF=1e18;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector g(n, vector<ll>(n,INF));
    vector dp(n, vector<ll>(n,INF));
    rep(i,n) dp[i][i]=0;
    rep(i,m){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        g[a][b]=c;
        dp[a][b]=dp[b][a]=c;
    }
    // ワーシャルフロイド
    rep(k,n)rep(i,n)rep(j,n){
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    }
    int ans=0;
    rep(i,n)rep(j,n) if(g[i][j]!=INF){
        bool ok =false;
        rep(k,n){
            if(i==k||j==k)continue;
            if(dp[i][k]+dp[k][j]<=g[i][j]) ok=true;
        }
        if(ok)ans++;
    }
    cout<<ans<<endl;
    return 0;
}