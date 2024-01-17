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
    int n;
    cin>>n;
    int a[n],b[n];
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    const int m=3001;
    vector<ll> dp(m);
    dp[0]=1;
    rep(i,n){
        vector<ll> p(m);
        swap(dp,p);
        rep(j,m-1){
            p[j+1]+=p[j];
            p[j+1]%=mod;
        }
        rep(j,m){
            if(a[i]<=j&&j<=b[i]){
                dp[j]+=p[j];
            }
            
        }
    }
    ll ans=0;
    rep(i,m){
        ans+=dp[i];
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}