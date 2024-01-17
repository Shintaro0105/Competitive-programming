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
using P = pair<ll,int>;
const int mod=998244353;
const ll inf=1e18+1;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> g(n+m);
    rep(i,n){
        int a;cin>>a;
        rep(j,a){
            int c;cin>>c;c--;
            g[i].push_back(n+c);
            g[n+c].push_back(i);
        }
    }
    priority_queue<P, vector<P>, greater<P>> pq;
    vector<ll> d(n+m,inf);
    d[n]=0;
    pq.emplace(d[n],n);
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.second;
        if(d[v]<p.first)continue;
        for(int u:g[v]){
            if(d[u]>d[v]+1){
                d[u]=d[v]+1;
                pq.emplace(d[u],u);
            }
        }
    }
    if(d[n+m-1]==inf)cout<<-1<<endl;
    else cout<<d[n+m-1]/2-1<<endl;
    return 0;
}