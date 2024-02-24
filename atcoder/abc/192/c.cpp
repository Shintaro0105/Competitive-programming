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

map<ll,ll> g1,g2;

ll g_1(ll x){
    if(g1.count(x)){
        return g1[x];
    }else{
        vector<ll> v;
        ll n=x;
        while(n!=0){
            v.push_back(n%10);
            n/=10;
        }
        ll sum=0;
        sort(ALL(v));
        ll j=1;
        rep(i,v.size()){
            sum+=v[i]*j;
            j*=10;
        }
        g1[x]=sum;
        return sum;
    }
}

ll g_2(ll x){
    if(g2.count(x)){
        return g2[x];
    }else{
        vector<ll> v;
        ll n=x;
        while(n!=0){
            v.push_back(n%10);
            n/=10;
        }
        ll sum=0;
        sort(ALL(v),greater<ll>());
        ll j=1;
        rep(i,v.size()){
            sum+=v[i]*j;
            j*=10;
        }
        g2[x]=sum;
        return sum;
    }
}

ll f(ll x){
    return g_1(x)-g_2(x);
}

int main(){
    ll n,k;cin>>n>>k;
    ll a=n;
    rep(i,k){
        a=f(a);
    }
    cout<<a<<endl;
    return 0;
}