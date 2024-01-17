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
    int n;
    cin>>n;
    int a[n],b[n];
    set<int> s;
    rep(i,n){
        cin>>a[i]>>b[i];
        s.insert(a[i]);
        s.insert(b[i]);
    }
    s.insert(1);
    vector<int> c;
    for(int i:s){
        c.push_back(i);
    }
    sort(c.begin(),c.end());
    int i=0;
    map<int,int> mp,p;
    for(int j:c){
        mp[j]=i;
        p[i]=j;
        //cout<<j<<' '<<i<<endl;
        i++;
    }
    UnionFind uf(i);
    rep(j,n){
        uf.unite(mp[a[j]],mp[b[j]]);
    }
    int ans=1;
    rep(j,i){
        if(uf.same(0,j))ans=max(ans,p[j]);
    }
    cout<<ans<<endl;
    return 0;
}