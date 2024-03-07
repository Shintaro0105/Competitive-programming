#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,q;cin>>n>>q;
    vector<int> c(n);
    dsu d(n);
    map<int,map<int,int>> mp;
    rep(i,n){
        cin>>c[i];
        c[i]--;
        mp[i][c[i]]++;
    }
    rep(i,q){
        int t;cin>>t;
        if(t==1){
            int a,b;cin>>a>>b;
            a--;b--;
            a=d.leader(a);b=d.leader(b);
            if(a==b)continue;
            int r=d.merge(a,b);
            if(a!=r)swap(a,b);
            for(auto p:mp[b]){
                mp[a][p.first]+=p.second;
            }
        }else{
            int x,y;cin>>x>>y;
            x--;y--;
            if(mp[d.leader(x)].count(y)){
                cout<<mp[d.leader(x)][y]<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}