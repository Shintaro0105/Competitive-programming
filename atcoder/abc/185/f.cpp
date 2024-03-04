#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll op(ll a,ll b){
    return a^b;
}

ll e(){
    return 0;
}

int main(){
    int n,q;cin>>n>>q;
    segtree<ll,op,e> seg(n);
    rep(i,n){
        ll a;cin>>a;
        seg.set(i,a);
    }
    while(q--){
        int t;cin>>t;
        if(t==1){
            ll x,y;
            cin>>x>>y;
            x--;
            seg.set(x,seg.get(x)^y);
        }else{
            ll x,y;
            cin>>x>>y;
            x--;
            cout<<seg.prod(x,y)<<endl;
        }
    }
    return 0;
}