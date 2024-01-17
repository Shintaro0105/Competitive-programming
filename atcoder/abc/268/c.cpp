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
    int p[n];
    rep(i,n)cin>>p[i];
    int dp[n];
    rep(i,n)dp[i]=0;
    rep(i,n){
        dp[(n-p[i]-1+i)%n]+=1;
        dp[(n-p[i]+i)%n]+=1;
        dp[(n-p[i]+1+i)%n]+=1;
    }
    int ans=0;
    rep(i,n)ans=max(dp[i],ans);
    cout<<ans<<endl;
    return 0;
}