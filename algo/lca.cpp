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

//abc209 d
vector<int> dep;
vector<vector<int>> to;

void dfs(int v, int _dep=0, int p=-1) {
    dep[v] = _dep;
    for (int u : to[v]){
        if (u == p) continue;
        dfs(u, _dep+1, v);
    }
}
 
int main(){
    int n;
    cin >> n;
    to.resize(n);
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    dep.resize(n);
    dfs(0);
    return 0;
}