#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,h,w;cin>>n>>h>>w;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i]>>b[i];
    vector grid(h,vector<bool>(w,false));
    queue<pair<vector<vector<bool>>,int>> q;
    q.push(make_pair(grid,0));
    map<pair<vector<vector<bool>>,int>,int> mp;
    mp[make_pair(grid,0)]=1;
    bool flag=false;
    while(!q.empty()){
        vector<vector<bool>> g = q.front().first;
        int t = q.front().second;
        q.pop();
        rep(i,h){
            rep(j,w){
                if(g[i][j])continue;
                if(i==0&&j>0)if(!g[i][j-1])break;
                if(i>0&&j>0){
                    if(!(g[i-1][j]&&g[i][j-1]))break;
                }
                rep(k,n){
                    if(t>>k&1)continue;
                    if(i+a[k]-1<h&&j+b[k]-1<w){
                        vector<vector<bool>> now=g;
                        bool on=true;
                        rep(x,a[k]){
                            rep(y,b[k]){
                                if(now[i+x][j+y]){
                                    on=false;
                                    break;
                                }else now[i+x][j+y]=true;
                            }
                            if(!on)break;
                        }
                        if(on&&!mp.count(make_pair(now,t|1<<k))){
                            mp[make_pair(now,t|1<<k)]=1;
                            q.push(make_pair(now,t|1<<k));
                        }
                    }
                    if(i+b[k]-1<h&&j+a[k]-1<w){
                        vector<vector<bool>> now=g;
                        bool on=true;
                        rep(x,b[k]){
                            rep(y,a[k]){
                                if(now[i+x][j+y]){
                                    on=false;
                                    break;
                                }else now[i+x][j+y]=true;
                            }
                            if(!on)break;
                        }
                        if(on&&!mp.count(make_pair(now,t|1<<k))){
                            mp[make_pair(now,t|1<<k)]=1;
                            q.push(make_pair(now,t|1<<k));
                        }
                    }
                }
                break;
            }
            if(i>0)if(!g[i-1][0])break;
        }
    }
    vector ans(h,vector<bool>(w,true));
    rep(i,1<<n)if(mp.count(make_pair(ans,i)))flag=true;
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}