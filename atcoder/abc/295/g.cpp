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

    int unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return x;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return x;
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
    vector<int> p(n);
    rep(i,n-1){
        cin>>p[i+1];
        p[i+1]--;
    }
    vector<int> r(n);
    rep(i,n)r[i]=i;
    UnionFind uf(n);
    auto get_min = [&](int i) { return r[uf.root(i)]; };
    int q;cin>>q;
    while(q--){
        int t;cin>>t;
        if(t==1){
            int u,v;
            cin>>u>>v;
            u--;v--;
            while (get_min(u) > v) {
                int mn = get_min(u);
                int nr = get_min(p[mn]);
                r[uf.unite(mn, p[mn])] = nr;
                //cout<<get_min(u)<<'\n';
            }
        }else{
            int x;
            cin >> x;
            --x;
            cout << r[uf.root(x)] + 1 << '\n';
        }
    }
    return 0;
}