#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll a,x,y;

map<ll,double> mp;

double f(ll n){
    if(mp.count(n)) return mp[n];
    mp[n]=min((double)x+f(n/a),(6.0/5.0)*(double)y+f(n/2)/5+f(n/3)/5+f(n/4)/5+f(n/5)/5+f(n/6)/5);
    return mp[n];
}

int main(){
    ll n; cin >> n >> a >> x >> y;
    mp[0]=0;
    cout << fixed << setprecision(10) << f(n) << endl;
    return 0;
}