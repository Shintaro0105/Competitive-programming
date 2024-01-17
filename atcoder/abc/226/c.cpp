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
    int n;cin>>n;
    vector<int> t(n);
    UnionFind dsu(n);
    vector<vector<int>> A(n);
    rep(i,n){
        int T,K;
        cin>>T>>K;
        t[i]=T;
        rep(ki,K){
            int a;cin>>a;
            a--;
            A[i].push_back(a);
        }
    }
    queue<int> q;
    for(int b:A[n-1])q.push(b);
    while(q.size()){
        int c=q.front();q.pop();
        dsu.unite(c,n-1);
        for(int d:A[c])if(!dsu.same(d,n-1))q.push(d);
    }
    ll ans=0;
    rep(i,n){
        if(dsu.same(i,n-1))ans+=t[i];
    }
    cout<<ans<<endl;
    return 0;
}