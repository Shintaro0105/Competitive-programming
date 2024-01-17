#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const ll inf=1L<<60;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> g(n),h(n);
    rep(i,m){
        int u,v,w;
        cin>>u>>v>>w;
        u--;v--;
        if(w){
            g[u].push_back(v);
            g[v].push_back(u);
        }else{
            h[u].push_back(v);
            h[v].push_back(u);
        }
    }
    vector<bool> s(n,false);
    rep(i,k){
        int u;cin>>u;
        u--;
        s[u]=true;
    }
    vector<vector<ll>> d(n,vector<ll>(2,inf));
    priority_queue<pair<ll,P>, vector<pair<ll,P>>, greater<pair<ll,P>>> pq; 
    if(s[0]){
        d[0][0]=0;
        d[0][1]=0;
        pq.push({d[0][0],{0,0}});
        pq.push({d[0][1],{0,1}});
    }else{
        d[0][0]=0;
        pq.push({d[0][0],{0,0}});
    }
    while(!pq.empty()){
        auto [dis,u]=pq.top();pq.pop();
        auto [v,sw]=u;
        if(d[v][sw]<dis)continue;
        if(s[v]){
            if(sw==0){
                for(int w:g[v]){
                    if(d[w][0]>d[v][0]+1){
                        d[w][0]=d[v][0]+1;
                        pq.push({d[w][0],{w,0}});
                    }
                }
                for(int w:h[v]){
                    if(d[w][1]>d[v][0]+1){
                        d[w][1]=d[v][0]+1;
                        pq.push({d[w][1],{w,1}});
                    }
                }
            }else{
                for(int w:g[v]){
                    if(d[w][0]>d[v][1]+1){
                        d[w][0]=d[v][1]+1;
                        pq.push({d[w][0],{w,0}});
                    }
                }
                for(int w:h[v]){
                    if(d[w][1]>d[v][1]+1){
                        d[w][1]=d[v][1]+1;
                        pq.push({d[w][1],{w,1}});
                    }
                }
            }
        }else{
            if(sw==0){
                for(int w:g[v]){
                    if(d[w][0]>d[v][0]+1){
                        d[w][0]=d[v][0]+1;
                        pq.push({d[w][0],{w,0}});
                    }
                }
            }else{
                for(int w:h[v]){
                    if(d[w][1]>d[v][1]+1){
                        d[w][1]=d[v][1]+1;
                        pq.push({d[w][1],{w,1}});
                    }
                }
            }
        }
    }
    ll ans=min(d[n-1][0],d[n-1][1]);
    if(ans==inf){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}