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
    int n,m;
    cin>>n>>m;
    vector<int> e(n,0);
    UnionFind dsu(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        e[u]++;
        e[v]++;
        dsu.unite(u,v);
    }
    int c1=0,c2=0;
    rep(i,n){
        if(e[i]==1)c1++;
        if(e[i]==2)c2++;
    }
    if(c1==2&&c2==n-2&&m==n-1&&dsu.size(0)==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}