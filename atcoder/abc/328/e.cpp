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
    int n,m;cin>>n>>m;
    ll k;cin>>k;
    vector<int> u(m),v(m);
    vector<ll> w(m);
    rep(i,m){
        cin>>u[i]>>v[i]>>w[i];
        u[i]--;v[i]--;
    }
    vector<int> p(m,0);
    rep(i,n-1)p[i]=1;
    sort(ALL(p));
    ll ans=inf;
    do{
        ll sum=0;
        bool flag=true;
        UnionFind uf(n);
        vector<bool> seen(n,false);
        rep(i,m){
            if(p[i]==1){
                if(uf.same(u[i],v[i])){
                    flag=false;
                }else{
                    uf.unite(u[i],v[i]);
                    seen[u[i]]=true;
                    seen[v[i]]=true;
                    sum+=w[i];
                }
            }
        }
        rep(i,n){
            if(!seen[i])flag=false;
        }
        if(flag)ans=min(ans,sum%k);
    }while(next_permutation(ALL(p)));
    cout<<ans<<endl;
    return 0;
}