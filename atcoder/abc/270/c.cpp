#include <iostream>
#include <vector>
#include <queue>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

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
    int x,y;
    cin>>x>>y;
    x--;y--;
    to.resize(n);
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    dep.resize(n);
    dfs(y);
    queue<int> q;
    q.push(x);
    while(q.size()){
        int v=q.front();
        q.pop();
        if(dep[v]==0){
            cout<<v+1<<endl;
            continue;
        }else{
            cout<<v+1<<' ';
        }
        for(int u:to[v]){
            if(dep[u]==dep[v]-1){
                q.push(u);
            }
        }
    }
    return 0;
}