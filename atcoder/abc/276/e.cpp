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
    int h,w;cin>>h>>w;
    P s;
    vector<vector<char>> c(h,vector<char>(w));
    rep(i,h)rep(j,w){
        cin>>c[i][j];
        if(c[i][j]=='S')s={i,j};
    }
    vector<P> ok;
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    //cout<<s.first<<' '<<s.second<<endl;
    rep(i,4){
        int ni=s.first+dx[i],nj=s.second+dy[i];
        if(0<=ni&&ni<h&&0<=nj&&nj<w){
            if(c[ni][nj]=='.'){
                ok.push_back({ni,nj});
                //cout<<ni<<' '<<nj<<endl;
            }
        }
    }
    UnionFind uf(h*w);
    auto [si,sj]=s;
    rep(i,h){
        rep(j,w){
            rep(k,2){
                int ni=i+dx[k],nj=j+dy[k];
                if(0<=ni&&ni<h&&0<=nj&&nj<w&&!(ni==si&&nj==sj)){
                    if(c[i][j]=='.'&&c[ni][nj]=='.')uf.unite(i+h*j,ni+h*nj);
                }
            }
        }
    }
    bool flag=false;
    int n=ok.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            auto [ai,aj]=ok[i];
            auto [bi,bj]=ok[j];
            if(uf.same(ai+h*aj,bi+h*bj))flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}