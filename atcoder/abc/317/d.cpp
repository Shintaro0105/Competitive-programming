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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const ll inf=1e18+1;

int main(){
    int n;cin>>n;
    vector<ll> x(n),y(n),z(n);
    int sum=0;
    rep(i,n){
        cin>>x[i]>>y[i]>>z[i];
        sum+=z[i];
    }
    vector dp(n+1,vector<ll>(sum+1,inf));
    dp[0][0]=0;
    rep(i,n){
        rep(j,sum+1){
            if(x[i]>y[i]&&j+z[i]<=sum){
                dp[i+1][j+z[i]]=min(dp[i][j],dp[i+1][j+z[i]]);
            }else if(x[i]<y[i]&&j+z[i]<=sum){
                dp[i+1][j+z[i]]=min(dp[i][j]+(x[i]+y[i]+1)/2-x[i],dp[i+1][j+z[i]]);
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
            }
        }
    }
    ll ans=inf;
    for(int i=(sum+1)/2;i<=sum;i++){
        ans=min(ans,dp[n][i]);
    }
    cout<<ans<<endl;
    return 0;
}