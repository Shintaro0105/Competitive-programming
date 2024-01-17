#include <iostream>
#include <vector>
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

const int MOD=998244353;

int main(){
    int n;cin>>n;
    vector<P> p(n);
    rep(i,n) cin>>p[i].first;
    rep(i,n) cin>>p[i].second;
    sort(p.begin(),p.end());
    const int MX = 5001;
    vector<int> dp(MX,1);
    ll ans=0;
    rep(i,n){
        auto [a,b] = p[i];
        if(a>=b){
            ans += dp[a-b];
            ans%=MOD;
        }
        for(int j=MX-b;j>=0;--j){
            dp[j+b]+=dp[j];
            dp[j+b]%=MOD;
        }
    }
    cout<<ans<<endl;
    return 0;
}