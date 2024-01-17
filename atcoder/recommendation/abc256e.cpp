#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

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
    int n;
    cin>>n;
    vector<int> g(n);
    vector<ll> c(n);
    UnionFind tree(n);
    ll ans=0;
    rep(i,n){
        cin>>g[i];
        g[i]--;
    }
    rep(i,n)cin>>c[i];
    rep(i,n){
        int x=g[i];
        if(tree.same(i,x)){
            int v=i;
            ll res=c[i];
            do{
                v=g[v];
                res=min(res,c[v]);
            }while(v!=i);
            ans+=res;
        }
        tree.unite(i,x);
    }
    cout<<ans<<endl;
    return 0;
}