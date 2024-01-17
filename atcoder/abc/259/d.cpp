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
    UnionFind tree(n+2);
    long double s[2],t[2];
    cin>>s[0]>>s[1]>>t[0]>>t[1];
    long double x[n],y[n],r[n];
    rep(i,n)cin>>x[i]>>y[i]>>r[i];
    rep(i,n){
        rep(j,n){
            long double d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if((r[i]+r[j]>=d)&&(abs(r[i]-r[j])<=d)){
                tree.unite(i,j);
                //cout<<i<<' '<<j<<endl;
            }
            //cout<<r[i]<<' '<<r[j]<<' '<<d<<endl;
        }
    }
    rep(i,n){
        if((x[i]-s[0])*(x[i]-s[0])+(y[i]-s[1])*(y[i]-s[1])==r[i]*r[i])tree.unite(n,i);
        if((x[i]-t[0])*(x[i]-t[0])+(y[i]-t[1])*(y[i]-t[1])==r[i]*r[i])tree.unite(n+1,i);
    }
    if(tree.same(n,n+1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}