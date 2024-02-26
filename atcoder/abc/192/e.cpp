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
const ll inf=1e18+1;

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
    int n,m,x,y;cin>>n>>m>>x>>y;
    x--;y--;
    UnionFind uf(n);
    vector<vector<pair<int,pair<ll,ll>>>> g(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        ll t,k;cin>>t>>k;
        uf.unite(a,b);
        g[a].push_back(make_pair(b,make_pair(t,k)));
        g[b].push_back(make_pair(a,make_pair(t,k)));
    }
    if(!uf.same(x,y))cout<<-1<<endl;
    else{
        vector<ll> d(n,inf);
        d[x]=0;
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
        pq.push(make_pair(0,x));
        while(!pq.empty()){
            auto [time,from]=pq.top();
            pq.pop();
            if(d[from]<time)continue;
            for(auto [to,p]:g[from]){
                if(d[to]>time+(p.second-time%p.second)%p.second+p.first){
                    d[to]=time+(p.second-time%p.second)%p.second+p.first;
                    pq.push(make_pair(d[to],to));
                }
            }
        }
        cout<<d[y]<<endl;
    }
    return 0;
}