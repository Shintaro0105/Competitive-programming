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
    int x,y,a,b,c;cin>>x>>y>>a>>b>>c;
    vector<ll> p(a),q(b),r(c);
    rep(i,a) cin>>p[i];
    rep(i,b) cin>>q[i];
    rep(i,c) cin>>r[i];
    sort(ALL(p),greater<ll>());
    sort(ALL(q),greater<ll>());
    sort(ALL(r),greater<ll>());
    ll ans=0;
    vector<ll> pq;
    rep(i,x){
        pq.push_back(p[i]);
    }
    rep(i,y){
        pq.push_back(q[i]);
    }
    sort(ALL(pq),greater<ll>());
    vector<ll> sum(pq.size()+1,0),sumc(c+1,0);
    rep(i,pq.size()){
        sum[i+1]=sum[i]+pq[i];
    }
    rep(i,c){
        sumc[i+1]=sumc[i]+r[i];
    }
    rep(i,min(c+1,x+y+1)){
        ans=max(ans,sumc[i]+sum[x+y-i]);
    }
    cout<<ans<<endl;
    return 0;
}