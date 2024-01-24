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
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    vector<P> p;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#')p.push_back(make_pair(i,j));
        }
    }
    vector<vector<int>> g(h*w);
    int dx[8]={-1,0,1,-1,1,-1,0,1},dy[8]={-1,-1,-1,0,0,1,1,1};
    for(auto [x,y]:p){
        rep(i,8){
            int nx=x+dx[i],ny=y+dy[i];
            if(0<=nx&&nx<h&&0<=ny&&ny<w){
                if(s[nx][ny]=='#'){
                    g[x*w+y].push_back(nx*w+ny);
                }
            }
        }
    }
    UnionFind uf(h*w+1);
    for(auto [x,y]:p){
        for(int i:g[x*w+y]){
            uf.unite(i,x*w+y);
        }
    }
    int ans=0;
    for(auto [x,y]:p){
        if(!uf.same(x*w+y,h*w)){
            ans++;
            uf.unite(x*w+y,h*w);
        }
    }
    cout<<ans<<endl;
    return 0;
}