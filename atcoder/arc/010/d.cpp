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
#include <cstring>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int MAX_V=100;
const ll INF=1e9;

//辺を表す構造体（行き先、容量、逆辺）
struct edge
{
    int to, cap, rev;
};

vector<edge> G[MAX_V];//グラフの隣接リスト表現
int level[MAX_V];//sからの距離
int iter[MAX_V];//どこまで調べ終わったか

//fromからtoへ向かう容量capの辺をグラフに追加する
void add_edge(int from, int to, int cap){
    int s=G[to].size(),t=G[from].size()-1;
    G[from].push_back((edge){to, cap, s});
    G[to].push_back((edge){from, 0, t});
}

//sからの最短距離をBFSで計算する
void bfs(int s){
    memset(level, -1, sizeof(level));
    queue<int> que;
    level[s]=0;
    que.push(s);
    while(!que.empty()){
        int v=que.front();que.pop();
        rep(i,G[v].size()){
            edge &e=G[v][i];
            if(e.cap>0 && level[e.to]<0){
                level[e.to]=level[v]+1;
                que.push(e.to);
            }
        }
    }
}

//増加パスをDFSで探す
int dfs(int v, int t, int f){
    if(v==t)return f;
    for(int &i=iter[v];i<G[v].size();i++){
        edge &e=G[v][i];
        if(e.cap>0 && level[v]<level[e.to]){
            int d=dfs(e.to, t, min(f, e.cap));
            if(d>0){
                e.cap-=d;
                G[e.to][e.rev].cap+=d;
                return d;
            }
        }
    }
    return 0;
}

//sからtへの最大流を求める
int max_flow(int s, int t){
    int flow=0;
    for(;;){
        bfs(s);
        if(level[t]<0)return flow;
        memset(iter, 0, sizeof(iter));
        int f;
        while((f=dfs(s, t, INF))>0){
            flow+=f;
        }
    }
}

int main(){
    int n,g,e;cin>>n>>g>>e;
    int p[g];
    rep(i,g)cin>>p[i];
    rep(i,e){
        int a,b;
        cin>>a>>b;
        add_edge(a,b,1);
    }
    for(auto v:p){
        add_edge(v,n,1);
    }
    cout<<max_flow(0,n)<<endl;
    return 0;
}