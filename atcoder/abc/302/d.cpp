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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,m;cin>>n>>m;
    ll d;cin>>d;
    vector<ll> a(n),b(m);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=-1;
    rep(i,n){
        auto itr=upper_bound(ALL(b),a[i]+d);
        if(itr==b.begin())continue;
        itr--;
        if(*itr>=a[i]-d){
            ans=max(ans,a[i]+*itr);
        }
    }
    cout<<ans<<endl;
    return 0;
}