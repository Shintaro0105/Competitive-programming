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
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int n=6,m=4;
    int a=0;
    rep(i,m)rep(j,m){
        int ni=i*m+j;
        int na;cin>>na;
        a|=na<<ni;
    }
    int ans=0;
    rep(s,1<<16)if((s&a)==a){
        UnionFind d(n*n);
        vector x(n,vector<int>(n));
        rep(i,m)rep(j,m) if(s>>(i*m+j)&1)x[i+1][j+1]=1;
        rep(i,n)rep(j,n){
            int ni=i*n+j;
            if(i+1<n&&x[i][j]==x[i+1][j])d.unite(ni,ni+n);
            if(j+1<n&&x[i][j]==x[i][j+1])d.unite(ni,ni+1);
        }
        int cnt=0;
        rep(i,n*n)if(d.root(i)==i)cnt++;
        if(cnt==2)ans++;
    }
    cout<<ans<<endl;
    return 0;
}