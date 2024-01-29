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
    int n,m;cin>>n>>m;
    vector<int> a(m),b(m);
    rep(i,m){
        cin>>a[i];
        a[i]--;
    }
    rep(i,m){
        cin>>b[i];
        b[i]--;
    }
    UnionFind uf(n+1);
    vector<vector<int>> g(n);
    rep(i,m){
        uf.unite(a[i],b[i]);
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    queue<int> q;
    rep(i,n){
        if(!uf.same(i,n)){
            q.push(i);
            uf.unite(i,n);
        }
    }
    vector<int> x(n,-1);
    bool flag=true;
    vector<bool> seen(n,false);
    while(!q.empty()){
        int i=q.front();
        q.pop();
        if(x[i]==-1){
            x[i]==0;
        }
        if(seen[i])continue;
        for(int j:g[i]){
            if(x[j]==-1){
                x[j]=1-x[i];
                q.push(j);
            }else if(x[i]==x[j])flag=false;
        }
        seen[i]=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}