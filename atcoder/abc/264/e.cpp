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
using namespace std;
using ll = long long int;
using P = pair<int,int>;
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
    int n,m,e;
    cin>>n>>m>>e;
    int u[e],v[e];
    rep(i,e){
        cin>>u[i]>>v[i];
        u[i]--;v[i]--;
    }
    int q;
    cin>>q;
    int x[q];
    bool f[e];
    rep(i,e)f[i]=true;
    rep(i,q){
        cin>>x[i];
        x[i]--;
        f[x[i]]=false;
    }
    UnionFind d(n+1);
    rep(i,e){
        if(f[i])d.unite(min(n,u[i]),min(n,v[i]));
    }
    int ans[q];
    ans[q-1]=d.size(n)-1;
    for(int i=q-1;i>=1;i--){
        int j=x[i];
        d.unite(min(n,u[j]),min(n,v[j]));
        ans[i-1]=d.size(n)-1;
    }
    rep(i,q)cout<<ans[i]<<'\n';
    return 0;
}