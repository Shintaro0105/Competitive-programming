#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> z(n),w(n);
    ll zmax=-2e9,wmax=-2e9,zmin=2e9,wmin=2e9;
    rep(i,n){
        ll x,y;cin>>x>>y;
        z[i]=x+y;
        w[i]=x-y;
        zmax=max(zmax,z[i]);
        wmax=max(wmax,w[i]);
        zmin=min(zmin,z[i]);
        wmin=min(wmin,w[i]);
    }
    cout<<max(zmax-zmin,wmax-wmin)<<endl;
    return 0;
}