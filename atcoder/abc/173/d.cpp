#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n)cin>>a[i];
    priority_queue<pair<ll,P>> pq;
    sort(ALL(a),greater<ll>());
    pq.push(make_pair(a[0],make_pair(0,0)));
    ll ans=0;
    for(int i=1;i<n;i++){
        auto [p1,p2]=pq.top();
        pq.pop();
        ans+=p1;
        pq.push(make_pair(min(a[p2.first],a[i]),make_pair(p2.first,i)));
        pq.push(make_pair(min(a[p2.second],a[i]),make_pair(i,p2.second)));
    }
    cout<<ans<<endl;
    return 0;
}