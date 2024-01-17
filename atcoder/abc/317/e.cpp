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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int h,w;cin>>h>>w;
    vector maze(h,vector<char>(w));
    vector d(h,vector<int>(w,inf));
    string e=">v<^";
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    P s,g;
    queue<P> q;
    rep(i,h){
        rep(j,w){
            cin>>maze[i][j];
            if(maze[i][j]=='S'){
                s.first=i;
                s.second=j;
                d[i][j]=0;
            }else if(maze[i][j]=='G'){
                g.first=i;
                g.second=j;
            }
            rep(k,4){
                if(e[k]==maze[i][j]){
                    q.push(make_pair(i,j));
                }
            }
        }
    }
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        rep(k,4){
            if(e[k]==maze[i][j]){
                int nx=i+dx[k],ny=j+dy[k];
                while(0<=nx&&nx<h&&0<=ny&&ny<w){
                    if(maze[nx][ny]=='.'||maze[nx][ny]=='!'){
                        maze[nx][ny]='!';
                        nx+=dx[k];
                        ny+=dy[k];
                    }else{
                        break;
                    }
                }
            }
        }
    }
    /* rep(i,h){
        rep(j,w){
            cout<<maze[i][j];
        }
        cout<<endl;
    } */
    q.push(s);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        rep(k,4){
            int nx=i+dx[k],ny=j+dy[k];
            if(0<=nx&&nx<h&&0<=ny&&ny<w){
                if((maze[nx][ny]=='.'||maze[nx][ny]=='G')&&(d[nx][ny]>d[i][j]+1)){
                    d[nx][ny]=d[i][j]+1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    if(d[g.first][g.second]==inf){
        cout<<-1<<endl;
    }else{
        cout<<d[g.first][g.second]<<endl;
    }
    return 0;
}