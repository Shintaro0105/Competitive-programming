#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
int cnt = 0; 
using Graph = vector<vector<int>>;

vector<bool> seen;  // 探索したか記録
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto e : G[v]) {
        if (seen[e]) continue;  // 訪問済みでなければ探索
    
        dfs(G, e);
        
    }
    cnt++;
}

int main(){
    int n,m;cin>>n>>m;
    Graph G(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
    }
      // 初期化
    
    rep(i,n) {
        seen.assign(n, false);
        if (!seen[i]) {
            dfs(G, i);
        
        }
    }
    cout << cnt << endl;
    return 0;
}