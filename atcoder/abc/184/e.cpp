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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int h,w;cin>>h>>w;
    vector<string> a(h);
    rep(i,h)cin>>a[i];
    vector<vector<P>> tp(26);
    P s,g;
    rep(i,h){
        rep(j,w){
            if(a[i][j]=='S')s={i,j};
            if(a[i][j]=='G')g={i,j};
            if('a'<=a[i][j]&&a[i][j]<='z')tp[a[i][j]-'a'].push_back({i,j});
        }
    }
    vector dist(h,vector<int>(w,inf));
    dist[s.first][s.second]=0;
    queue<pair<int,P>> pq;
    vector seen(h,vector<bool>(w,false));
    pq.push({0,s});
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    while(!pq.empty()){
        auto [d,p]=pq.front();
        pq.pop();
        auto [i,j]=p;
        if(dist[i][j]<d)continue;
        for(int k=0;k<4;k++){
            int ni=i+dx[k],nj=j+dy[k];
            if(ni<0||ni>=h||nj<0||nj>=w)continue;
            if(a[ni][nj]=='#')continue;
            if(dist[ni][nj]>d+1){
                dist[ni][nj]=d+1;
                pq.push({dist[ni][nj],{ni,nj}});
            }
        }
        if('a'<=a[i][j]&&a[i][j]<='z'){
            for(auto [ni,nj]:tp[a[i][j]-'a']){
                if(dist[ni][nj]>d+1){
                    dist[ni][nj]=d+1;
                    pq.push({dist[ni][nj],{ni,nj}});
                }
            }
            tp[a[i][j]-'a'].clear();
        }
    }
    if(dist[g.first][g.second]==inf)cout<<-1<<endl;
    else cout<<dist[g.first][g.second]<<endl;
    return 0;
}