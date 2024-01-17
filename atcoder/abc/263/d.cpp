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
const ll inf=1e15+1;

int main(){
    int n;
    ll l,r;
    cin>>n>>l>>r;
    ll a[n];
    rep(i,n)cin>>a[i];
    ll f[n+1],g[n+1];
    f[0]=0;
    rep(i,n){
        f[i+1]=min(f[i]+a[i],l*(i+1));
    }
    g[0]=0;
    rep(i,n){
        g[i+1]=min(g[i]+a[n-1-i],r*(i+1));
    }
    ll ans=inf;
    rep(i,n+1){
        ans=min(ans,f[i]+g[n-i]);
    }
    cout<<ans<<endl;
    return 0;
}