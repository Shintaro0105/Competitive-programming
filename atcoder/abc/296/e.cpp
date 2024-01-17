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
    UnionFind uf(n);
    vector<bool> ok(n,false),ans(n,false);
    vector<int> g(n);
    vector<int> a(n),b;
    rep(i,n){
        cin>>a[i];
        a[i]--;
        if(i==a[i]){
            ok[i]=true;
        }else{
            g[i]=a[i];
            if(!uf.unite(i,a[i])){
                b.push_back(i);
            }
        }
    }
    for(int v:b){
        vector<bool> seen(n,false);
        vector<int> r;
        bool flag=true;
        int u=v;
        while(1){
            if(!seen[u]){
                seen[u]=true;
                r.push_back(u);
                if(ok[u]){
                    flag=false;
                    break;
                }
                u=g[u];
            }else{
                break;
            }
        }
        if(flag){
            for(int i:r)ans[i]=true;
        }
    }
    int sum=0;
    rep(i,n){
        if(ok[i]||ans[i])sum++;
    }
    cout<<sum<<endl;
    return 0;
}