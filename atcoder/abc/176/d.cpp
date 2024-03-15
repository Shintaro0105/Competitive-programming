#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
const int inf=1e9+1;

int main(){
    int h,w;cin>>h>>w;
    P c,d;cin>>c.first>>c.second>>d.first>>d.second;
    c.first--;c.second--;d.first--;d.second--;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    dsu uf(h*w);
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='.'){
                rep(k,4){
                    int ni=i+dy[k],nj=j+dx[k];
                    if(0<=ni&&ni<h&&0<=nj&&nj<w){
                        if(s[ni][nj]=='.')uf.merge(i*w+j,ni*w+nj);
                    }
                }
            }
        }
    }
    vector num(h,vector<int>(w));
    rep(i,h){
        rep(j,w){
            num[i][j]=uf.leader(i*w+j);
        }
    }
    vector<vector<int>> g(h*w);
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#')continue;
            for(int x=-2;x<=2;x++){
                for(int y=-2;y<=2;y++){
                    int ni=i+x,nj=j+y;
                    if(0<=ni&&ni<h&&0<=nj&&nj<w){
                        if(s[ni][nj]=='.'){
                            g[num[i][j]].push_back(num[ni][nj]);
                        }
                    }
                }
            }
        }
    }
    vector<int> dis(h*w,inf);
    dis[num[c.first][c.second]]=0;
    priority_queue<P,vector<P>,greater<P>> pq;
    pq.push({0,num[c.first][c.second]});
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.second;
        if(dis[v]<p.first)continue;
        for(int u:g[v]){
            if(dis[u]>dis[v]+1){
                dis[u]=dis[v]+1;
                pq.push({dis[u],u});
            }
        }
    }
    if(dis[num[d.first][d.second]]==inf)cout<<-1<<endl;
    else cout<<dis[num[d.first][d.second]]<<endl;
    return 0;
}