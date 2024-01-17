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
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<ll> x(n),y(n);
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    vector<vector<ll>> dp(n+1,vector<ll>(2,0));
    rep(i,n){
        if(x[i]==0){
            dp[i+1][0]=max(max(dp[i][0]+y[i],dp[i][1]+y[i]),dp[i][0]);
            dp[i+1][1]=dp[i][1];
        }else{
            dp[i+1][0]=dp[i][0];
            dp[i+1][1]=max(dp[i][0]+y[i],dp[i][1]);
        }
    }
    cout<<max(dp[n][0],dp[n][1])<<endl;
    return 0;
}