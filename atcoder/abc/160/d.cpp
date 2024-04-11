#include <iostream>
#include <vector>
#include <queue>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
const int inf=1e9+1;

int main(){
    int n,x,y;cin>>n>>x>>y;
    vector<vector<int>> g(n);
    rep(i,n-1){
        g[i+1].push_back(i);
        g[i].push_back(i+1);
    }
    x--;y--;
    g[x].push_back(y);
    g[y].push_back(x);
    vector<int> ans(n,0);
    rep(i,n-1){
        vector<int> dist(n,inf);
        dist[i]=0;
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int v=q.front();
            q.pop();
            for(int to:g[v]){
                if(dist[to]>dist[v]+1){
                    dist[to]=dist[v]+1;
                    q.push(to);
                }
            }
        }
        for(int j=i+1;j<n;j++){
            ans[dist[j]]++;
        }
    }
    rep(i,n-1)cout<<ans[i+1]<<endl;
    return 0;
}