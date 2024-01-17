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
    ll x,y,z;cin>>x>>y>>z;
    string s;cin>>s;
    int l=s.size();
    vector<vector<ll>> dp(l+1,vector<ll>(2,0));
    dp[0][1]=z;
    rep(i,l){
        if(s[i]=='a'){
            dp[i+1][0]=min(dp[i][0]+x,dp[i][1]+z+x);
            dp[i+1][1]=min(dp[i][1]+y,dp[i][0]+z+y);
        }else{
            dp[i+1][0]=min(dp[i][0]+y,dp[i][1]+z+y);
            dp[i+1][1]=min(dp[i][1]+x,dp[i][0]+z+x);
        }
    }
    cout<<min(dp[l][0],dp[l][1])<<endl;
    return 0;
}