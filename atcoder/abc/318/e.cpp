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
using namespace std;
using ll = long long int;
#define rep(i,n) for(ll i = 0;i < (n);i++)
#define ALL(a)  (a).begin(),(a).end()

int main(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,vector<ll>> mp;
    rep(i,n){
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    ll ans=0;
    for(auto [i,v]:mp){
        int l=v.size();
        if(l>=2){
            vector<ll> b(l-1);
            rep(j,l-1){
                b[j]=v[j+1]-v[j]-1;
            }
            rep(j,l-1){
                ans+=(j+1)*(l-1-j)*b[j];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}