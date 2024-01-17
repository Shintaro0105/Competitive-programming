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

vector<vector<int>> to;
vector<int> t;
vector<ll> ans;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> to(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> t(n);
    vector<ll> ans(n);
    auto dfs1 = [&](auto& f, int v, int p=-1) -> ll {
        ll res = 0;
        t[v] = 1;
        for (int u : to[v]) {
            if (u == p) continue;
            res += f(f,u,v)+t[u];
            t[v] += t[u];
        }
        return res;
    };
    ans[0] = dfs1(dfs1,0);
    auto dfs2 = [&](auto& f, int v, int p=-1) -> void {
        for (int u : to[v]) {
            if (u == p) continue;
            ans[u] = ans[v]+(n-t[u])-t[u];
            f(f,u,v);
        }
    };
    dfs2(dfs2,0);
    rep(i,n) cout << ans[i] << endl;
    return 0;
}