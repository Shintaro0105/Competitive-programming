#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll inf=1e18+1;

int main(){
    int n;cin>>n;
    vector<ll> x(n),y(n),z(n);
    rep(i,n)cin>>x[i]>>y[i]>>z[i];
    vector dp(n,vector<ll>(1<<n,inf));
    dp[0][1]=0;
    rep(i,1<<n){
        rep(j,n){
            if((i>>j)&1){
                rep(k,n){
                    if((i>>k)&1)continue;
                    dp[k][i|(1<<k)]=min(dp[k][i|(1<<k)],dp[j][i]+abs(x[j]-x[k])+abs(y[j]-y[k])+max((ll)0,z[k]-z[j]));
                    //cout<<i<<' '<<j<<' '<<k<<' '<<dp[k][i|(1<<k)]<<endl;
                }
            }
        }
    }
    ll ans=inf;
    rep(i,n-1){
        ans=min(ans,dp[i+1][(1<<n)-1]+abs(x[i+1]-x[0])+abs(y[i+1]-y[0])+max((ll)0,z[0]-z[i+1]));
    }
    cout<<ans<<endl;
    return 0;
}