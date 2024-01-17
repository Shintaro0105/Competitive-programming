#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

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
    UnionFind uf(n+1);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        uf.unite(u,v);
    }
    int sum=0;
    rep(i,n){
        if(uf.unite(i,n))sum++;
    }
    cout<<sum<<endl;
    return 0;
}