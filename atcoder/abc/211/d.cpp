#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<ll,ll>;
const ll MOD=1e9+7;
const ll inf=1e9+1;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(m),b(m);
    vector<vector<int>> g(n);
    rep(i,m){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    vector<pair<ll,ll>> d(n);
    rep(i,n){
        d[i].first=inf;
        d[i].second=0;
    }
    d[0].first=0;
    d[0].second=1;
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.emplace(d[0].first,0);
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.second;
        if(d[v].first<p.first)continue;
        for(int u:g[v]){
            if(d[u].first>d[v].first+1){
                d[u].first=d[v].first+1;
                d[u].second=d[v].second;
                pq.emplace(d[u].first,u);
                d[u].second%=MOD;
            }else if(d[u].first==d[v].first+1){
                d[u].second+=d[v].second;
                d[u].second%=MOD;
            }
        }
    }
    cout<<d[n-1].second<<endl;
    return 0;
}