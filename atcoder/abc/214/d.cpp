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
    int n;cin>>n;
    UnionFind t(n);
    vector<pair<ll,P>> p(n-1);
    rep(i,n-1){
        int u,v;
        cin>>u>>v;
        u--;v--;
        ll w;
        cin>>w;
        p[i]=make_pair(w,make_pair(u,v));
    }
    sort(p.begin(),p.end());
    ll ans=0;
    rep(i,n-1){
        auto [w,q]=p[i];
        auto [u,v]=q;
        ans+=w*t.size(u)*t.size(v);
        t.unite(u,v);
    }
    cout<<ans<<endl;
    return 0;
}