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
    int n;cin>>n;
    const int amax=2e5;
    vector<int> cnt(amax,0);
    rep(i,n){
        int a;cin>>a;
        a--;
        cnt[a]++;
    }
    ll ans=0;
    ll dp[2][amax];
    dp[0][0]=cnt[0];
    dp[1][0]=0;
    rep(i,amax-1){
        dp[0][i+1]=dp[0][i]+cnt[i+1];
        dp[1][i+1]=dp[0][i]*cnt[i+1]+dp[1][i];
        ans+=dp[1][i]*cnt[i+1];
    }
    cout<<ans<<endl;
    return 0;
}