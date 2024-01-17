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
    string s;cin>>s;
    int n=s.size();
    vector<vector<ll>> a(n+1,vector<ll>(10,0));
    rep(i,n){
        a[i+1][s[i]-'0']++;
    }
    rep(i,n){
        rep(j,10){
            a[i+1][j]+=a[i][j];
        }
    }
    set<ll> t;
    map<ll,ll> mp;
    rep(i,n+1){
        ll sum=0;
        rep(j,10){
            if(a[i][j]%2!=0){
                sum+=1<<j;
            }
        }
        t.insert(sum);
        mp[sum]++;
    }
    ll ans=0;
    for(ll i:t){
        ans+=mp[i]*(mp[i]-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}