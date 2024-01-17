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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int h,w;cin>>h>>w;
    char c[h][w];
    vector<vector<int>> dp(h,vector<int>(w,0));
    dp[0][0]=1;
    rep(i,h)rep(j,w)cin>>c[i][j];
    int dx[2]={1,0},dy[2]={0,1};
    rep(i,h){
        rep(j,w){
            rep(k,2){
                int nx=i+dx[k],ny=j+dy[k];
                if(nx<h&&ny<w){
                    if(c[nx][ny]=='.'&&dp[i][j]!=0){
                        dp[nx][ny]=dp[i][j]+1;
                    }
                }
            }
        }
    }
    int ans=-1;
    rep(i,h)rep(j,w)ans=max(ans,dp[i][j]);
    cout<<ans<<endl;
    return 0;
}