#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)
const int mod=998244353;


long long dp[2005][2005][2];

int main(){
    int n,m,k,s,t,x;
    cin>>n>>m>>k>>s>>t>>x;
    s--;t--;x--;
    vector<vector<int>> to(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    dp[0][s][0]=1;
    rep(ki,k)rep(ni,n)rep(i,2){
        for(int v:to[ni]){
            dp[ki+1][v][i^(v==x)]+=dp[ki][ni][i];
            dp[ki+1][v][i^(v==x)]%=mod;
        }
    }
    cout<<dp[k][t][0]<<endl;
    return 0;
}