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
const int INF=1e9;

int main(){
    int n,x,y;cin>>n>>x>>y;
    int a[n+1],b[n+1];
    int mx=0,my=0;
    rep(i,n){
        cin>>a[i+1]>>b[i+1];
        mx+=a[i+1];
        my+=b[i+1];
    }
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(x+1,vector<int>(y+1,INF)));
    dp[0][0][0]=0;
    if(x>mx||y>my){
        cout<<-1<<endl;
    }else{
        rep(i,n+1)rep(j,x+1)rep(k,y+1){
            if(i){
                dp[i][min(a[i]+j,x)][min(b[i]+k,y)]=min(dp[i][min(a[i]+j,x)][min(b[i]+k,y)],dp[i-1][j][k]+1);
                dp[i][j][k]=min(dp[i][j][k],dp[i-1][j][k]);
            }
        }
        cout<<dp[n][x][y]<<endl;
    }
   
    return 0;
}