#include <iostream>
#include <vector>
#include <map>
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
    int n;
    cin>>n;
    vector<string> s(n),t(n);
    map<string,vector<int>> ms,mt;
    rep(i,n){
        cin>>s[i]>>t[i];
        ms[s[i]].push_back(i);
        mt[t[i]].push_back(i);
    }
    UnionFind uf(n);
    bool flag=true;
    rep(i,n){
        for(int j:ms[t[i]]){
            if(!uf.unite(i,j))flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}