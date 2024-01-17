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
    ll l;cin>>l;
    int n1,n2;cin>>n1>>n2;
    vector<pair<ll,ll>> x1(n1),x2(n2);
    rep(i,n1){
        cin>>x1[i].first;
        cin>>x1[i].second;
    }
    rep(i,n2){
        cin>>x2[i].first;
        cin>>x2[i].second;
    }
    vector<pair<ll,ll>> x;
    set<ll> s;
    ll l1=0;
    for(auto [a,b]:x1){
        l1+=b;
        s.insert(l1);
    }
    ll l2=0;
    for(auto [a,b]:x2){
        l2+=b;
        s.insert(l2);
    }
    for(auto a:s){
        x.push_back({a,0});
    }
    sort(x.begin(),x.end());
    int n=x.size();
    l1=0;
    ll lx=0,i=0;
    for(auto [a,b]:x1){
        l1+=b;
        while(lx<l1){
            lx=x[i].first;
            x[i].second=a;
            i++;
        }
    }
    l2=0,lx=0,i=0;
    for(auto [a,b]:x2){
        l2+=b;
        while(lx<l2){
            lx=x[i].first;
            x[i].second-=a;
            i++;
        }
    }
    ll ans=0,p=0;
    for(auto [a,b]:x){
        if(b==0){
            ans+=a-p;
        }
        p=a;
        //cout<<a<<' '<<b<<'\n';
    }
    cout<<ans<<endl;
    return 0;
}