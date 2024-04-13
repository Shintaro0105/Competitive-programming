#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long;

int main(){
    ll l,r;cin>>l>>r;
    vector<pair<ll,ll>> v;
    while(l<r){
        int i=0;
        for(ll j=1LL<<60;j>=1;j/=2){
            if(l%j==0){
                if(l+j<=r){
                    v.push_back({l,l+j});
                    l+=j;
                    break;
                }
            }
        }
    }

    cout<<v.size()<<endl;
    rep(i,v.size())cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}