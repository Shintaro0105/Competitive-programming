#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> g;

vector<bool> is_cycle;
vector<int> root_id;
void dfs(int v, int p) {
    root_id[v] = root_id[p];
    for(auto to : g[v]) {
        if(to != p) dfs(to, v);
    }
}

int main() {
    int n;
    cin >> n;
    g.resize(n);
    is_cycle.resize(n, true);
    root_id.resize(n, -1);
    vector<int> deg(n);
    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);
        deg[u]++, deg[v]++;
    }
    queue<int> que;
    for(int i = 0; i < n; i++) {
        if(deg[i] == 1) {
            que.push(i);
        }
    }
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        is_cycle[v] = false;
        for(auto to : g[v]) {
            if(deg[to] >= 2) {
                deg[to]--;
                if(deg[to] == 1) {
                    que.push(to);
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(is_cycle[i]) {
            root_id[i] = i;
            for(auto to : g[i]) {
                if(!is_cycle[to]) {
                    dfs(to, i);
                }
            }
        }
    }
    int q;
    cin >> q;
    while(q--) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        cout << (root_id[u] == root_id[v] ? "Yes" : "No") << endl;
    }
}