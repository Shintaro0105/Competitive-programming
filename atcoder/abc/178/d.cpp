#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint1000000007;

int main(){
    int s;cin>>s;
    vector<mint> dp(2001,0);
    for(int i=3;i<2001;i++)dp[i]=1;
    rep(i,2001){
        for(int j=3;j<2001;j++){
            if(i+j<=2000)dp[i+j]+=dp[i];
        }
    }
    cout<<dp[s].val()<<endl;
    return 0;
}