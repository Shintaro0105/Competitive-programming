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
    UnionFind tree(2005*2005);
    bool m[2005][2005];
    rep(i,2005)rep(j,2005)m[i][j]=false;
    vector<P> p(n);
    rep(i,n){
        int x,y;
        cin>>x>>y;
        x+=1000;
        y+=1000;
        p[i]=make_pair(x,y);
        m[x][y]=true;
    }
    int dx[6]={-1,-1,0,0,1,1},dy[6]={-1,0,-1,1,0,1};
    for(auto [i,j]:p){
        rep(k,6){
            int nx=i+dx[k],ny=j+dy[k];
            if(0<=nx&&nx<=2000&&0<=ny&&ny<=2000){
                if(m[nx][ny])tree.unite(i*2001+j,nx*2001+ny);
            }
        }
    }
    int ans=0;
    for(auto [i,j]:p){
        if(!tree.same(i*2001+j,2005*2005-1)){
            tree.unite(i*2001+j,2005*2005-1);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}