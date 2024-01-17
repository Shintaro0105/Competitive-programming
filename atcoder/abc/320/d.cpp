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
using P = pair<ll,ll>;
const int mod=998244353;
const int inf=1e9+1;

struct UnionFind {
    vector<int> par;
    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0) return x;
        return par[x] = root(par[x]);
    }

    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
        return -par[root(x)];
    }
};

int main(){
    int n,m;cin>>n>>m;
    UnionFind uf(n);
    vector<ll> a(m),b(m),x(m),y(m);
    vector<vector<pair<int,P>>> g(n);
    rep(i,m){
        cin>>a[i]>>b[i]>>x[i]>>y[i];
        a[i]--;
        b[i]--;
        uf.unite(a[i],b[i]);
        g[a[i]].push_back(make_pair(b[i],make_pair(x[i],y[i])));
        g[b[i]].push_back(make_pair(a[i],make_pair(-x[i],-y[i])));
    }
    vector<bool> ok(n,false);
    vector<P> ans(n);
    ans[0]=make_pair(0,0);
    vector<bool> seen(n,false);
    seen[0]=true;
    rep(i,n){
        if(uf.same(0,i)){
            ok[i]=true;
        }else{
            seen[i]=true;
        }
    }
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int i=q.front();
        q.pop();
        for(auto [to,dis]:g[i]){
            if(!seen[to]){
                ans[to]=make_pair(ans[i].first+dis.first,ans[i].second+dis.second);
                seen[to]=true;
                q.push(to);
            }
        }
    }
    rep(i,n){
        if(ok[i]){
            cout<<ans[i].first<<' '<<ans[i].second<<endl;
        }else{
            cout<<"undecidable"<<endl;
        }
    }
    return 0;
}