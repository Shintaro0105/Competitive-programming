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
    map<ll,ll> mp;
    queue<ll> q;
    rep(i,n){
        ll s,c;cin>>s>>c;
        mp[s]+=c;
    }
    for(auto const& [k,v]:mp){
        if(v>=2){
            mp[2*k]+=mp[k]/2;
            mp[k]=mp[k]%2;
            if(mp[2*k]>=2)q.push(2*k);
        }
    }
    while(!q.empty()){
        ll v=q.front();
        q.pop();
        mp[2*v]+=mp[v]/2;
        mp[v]=mp[v]%2;
        if(mp[2*v]>=2)q.push(2*v);
    }
    ll ans=0;
    for(auto const& [k,v]:mp)ans+=v;
    cout<<ans<<endl;
    return 0;
}