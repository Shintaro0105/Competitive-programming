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
using namespace std;
using ll = long long int;
using P = pair<int,ll>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;
    cin>>n;
    vector<P> p(100001);
    rep(i,100001){
        p[i]=make_pair(0,0);
    }
    rep(i,n){
        int t,x;
        ll a;
        cin>>t>>x>>a;
        p[t]=make_pair(x,a);
    }
    vector<vector<ll>> dp(100001,vector<ll>(5,-1));
    dp[0][0]=0;
    rep(i,100000){
        rep(j,5){
            if(dp[i][j]>=0){
                auto [x,a]=p[i+1];
                if(j==0){
                    ll b=a;
                    if(x!=0)b=0;
                    dp[i+1][0]=max(dp[i+1][0],dp[i][0]+b);
                    if(x==1)b=a;
                    else b=0;
                    dp[i+1][1]=max(dp[i+1][1],dp[i][0]+b);
                }else if(j==4){
                    ll b=a;
                    if(x!=4)b=0;
                    dp[i+1][4]=max(dp[i+1][4],dp[i][4]+b);
                    if(x==3)b=a;
                    else b=0;
                    dp[i+1][3]=max(dp[i+1][3],dp[i][4]+b);
                }else{
                    ll b=a;
                    if(x!=j)b=0;
                    dp[i+1][j]=max(dp[i+1][j],dp[i][j]+b);
                    if(x==j+1)b=a;
                    else b=0;
                    dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+b);
                    if(x==j-1)b=a;
                    else b=0;
                    dp[i+1][j-1]=max(dp[i+1][j-1],dp[i][j]+b);
                }
            }
            //if(i<4)cout<<dp[i][j]<<' ';
        }
        //if(i<4)cout<<endl;
    }
    ll ans=0;
    rep(i,5)ans=max(ans,dp[100000][i]);
    cout<<ans<<endl;
    return 0;
}