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

int main(){
    int n;cin>>n;
    int a[n];
    rep(i,n){
        cin>>a[i];
    }
    vector<ll> dp(10,0);
    dp[a[0]]=1;
    rep(i,n-1){
        vector<ll> p(10,0);
        rep(j,10){
            dp[j]%=mod;
            p[(j+a[i+1])%10]+=dp[j];
            p[(j*a[i+1])%10]+=dp[j];
            p[(j+a[i+1])%10]%=mod;
            p[(j*a[i+1])%10]%=mod;
        }
        rep(j,10)dp[j]=p[j];
    }
    rep(i,10)cout<<dp[i]<<endl;
    return 0;
}