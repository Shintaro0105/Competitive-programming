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
using namespace std;
using ll = long long int;
using P = pair<ll,ll>;
const ll INF = 1LL << 60;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> g(n);
    rep(i,m){
        int u,v;cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int k;cin>>k;
    vector<vector<bool>> ng(k,vector<bool>(n,false));
    vector<vector<int>> ok(k);
    rep(i,k){
        int p,d;cin>>p>>d;p--;
        vector<ll> dis(n,INF);
        priority_queue<P, vector<P>, greater<P>> pq;
        dis[p]=0;
        pq.emplace(dis[p], p);
        while (!pq.empty()) {
            P p = pq.top();
            pq.pop();
            int v = p.second;
            if (dis[v] < p.first) {  // 最短距離で無ければ無視
                continue;
            }
            for (auto e : g[v]) {
                if (dis[e] > dis[v] + 1) {  // 最短距離候補なら priority_queue に追加
                    dis[e] = dis[v] + 1;
                    pq.emplace(dis[e], e);
                }
            }
        }
        rep(j,n){
            if(dis[j]<d)ng[i][j]=true;
            if(dis[j]==d)ok[i].push_back(j);
            //cout<<dis[j]<<' ';
        }
        //cout<<endl;
    }
    vector<bool> nng(n,false);
    rep(i,k){
        rep(j,n){
            if(ng[i][j])nng[j]=true;
            /* if(ng[i][j]){
                cout<<1;
            }else{
                cout<<0;
            } */
        }
        //cout<<endl;
    }
    bool flag=true;
    string s;
    rep(i,n){
        s+='0';
    }
    rep(i,k){
        if(ok[i].size()==0)flag=false;
        bool f=false;
        for(int v:ok[i]){
            if(!nng[v]){
                f=true;
                s[v]='1';
            }
        }
        if(!f)flag=false;
    }
    if(k==0){
        rep(i,n)s[i]='1';
    }
    if(flag){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }else cout<<"No"<<endl;
    return 0;
}