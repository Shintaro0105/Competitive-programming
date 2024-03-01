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
    int n;cin>>n;
    ll C;cin>>C;
    vector<ll> a(n),b(n),c(n);
    rep(i,n)cin>>a[i]>>b[i]>>c[i];
    set<ll> s;
    map<ll,ll> mp;
    rep(i,n){
        s.insert(a[i]);
        s.insert(b[i]+1);
    }
    vector<ll> sum(s.size(),0),in(s.size());
    int i=0;
    for(auto a:s){
        mp[a]=i;
        in[i]=a;
        i++;
    }
    rep(i,n){
        sum[mp[a[i]]]+=c[i];
        sum[mp[b[i]+1]]-=c[i];
    }
    rep(i,sum.size()-1){
        sum[i+1]+=sum[i];
    }
    ll ans=0;
    rep(i,sum.size()){
        ans+=min(C,sum[i])*(in[i+1]-in[i]);
    }
    cout<<ans<<endl;
    return 0;
}