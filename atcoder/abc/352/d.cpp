#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,k;cin>>n>>k;
    vector<int> p(n),pos(n);
    rep(i,n){
        cin>>p[i];
        p[i]--;
        pos[p[i]]=i;
    }
    int ans=n+1;
    set<int> s;
    rep(i,k){
        s.insert(pos[i]);
    }
    ans=min(ans,*s.rbegin()-*s.begin());
    for(int i=0;i<n-k;i++){
        s.erase(pos[i]);
        s.insert(pos[i+k]);
        ans=min(ans,*s.rbegin()-*s.begin());
        // for(int j:s){
        //     cout<<j<<' ';
        // }
        // cout<<':';
        // cout<<*s.begin()<<' '<<*s.rbegin()<<endl;
    }
    cout<<ans<<endl;
    return 0;
}