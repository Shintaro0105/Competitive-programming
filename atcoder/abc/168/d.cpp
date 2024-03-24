#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> G(n);
    dsu uf(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        uf.merge(a,b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<vector<int>> g=uf.groups();
    if(g.size()==1){
        vector<int> d(n,1e9+1);
        d[0]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push(make_pair(0,0));
        vector<int> ans(n);
        while(!pq.empty()){
            auto [dis,v]=pq.top();
            pq.pop();
            if(d[v]<dis)continue;
            for(auto u:G[v]){
                if(d[u]>d[v]+1){
                    d[u]=d[v]+1;
                    pq.push(make_pair(d[u],u));
                    ans[u]=v+1;
                }
            }
        }
        cout<<"Yes"<<endl;
        rep(i,n-1)cout<<ans[i+1]<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}