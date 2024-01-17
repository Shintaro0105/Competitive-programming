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
    int n,m,k;
    cin>>n>>m>>k;
    ll dp[n][k+1];
    rep(i,n)rep(j,k+1)dp[i][j]=0;
    rep(i,m){
        dp[0][i+1]=1;
    }
    rep(i,n-1){
        for(int j=1;j<=k;j++){
            for(int l=1;l<=m;l++){
                if(j+l<=k){
                    dp[i+1][j+l]+=dp[i][j];
                    dp[i+1][j+l]%=mod;
                }
            }
        }
    }
    ll ans=0;
    rep(i,k){
        ans+=dp[n-1][i+1];
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}