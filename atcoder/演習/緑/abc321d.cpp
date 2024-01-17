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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    ll n,m;cin>>n>>m;
    ll p;cin>>p;
    vector<ll> a(n),b(m);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    sort(ALL(b));
    vector<ll> s(m+1,0);
    rep(i,m)s[i+1]=s[i]+b[i];
    ll ans=0;
    rep(i,n){
        auto itr=lower_bound(ALL(b),p-a[i]);
        ll num=(int)(itr-b.begin());
        ans+=(m-num)*p;
        ans+=s[num]+(num*a[i]);
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}