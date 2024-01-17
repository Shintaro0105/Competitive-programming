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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> g(n*n);
    rep(i,n){
        rep(j,n){
            rep(k,n){
                if(m>=(i-k)*(i-k)){
                    double l=(double)j-sqrt((double)m-((double)i-(double)k)*((double)i-(double)k));
                    if(0<=l&&abs(l-(int)l)==0){
                        g[i+n*j].push_back(k+n*l);
                        g[k+n*l].push_back(i+n*j);
                    }
                    l=(double)j+sqrt((double)m-((double)i-(double)k)*((double)i-(double)k));
                    if(l<n&&abs(l-(int)l)==0){
                        g[i+n*j].push_back(k+n*l);
                        g[k+n*l].push_back(i+n*j);
                    }
                }
            }
        }
    }
    vector<int> d(n*n,inf);
    priority_queue<P, vector<P>, greater<P>> pq;
    d[0]=0;
    pq.push({d[0],0});
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.second;
        if(d[v]<p.first)continue;
        for(int e:g[v]){
            if(d[e]>d[v]+1){
                d[e]=d[v]+1;
                pq.push({d[e],e});
            }
        }
    }
    rep(i,n*n)if(d[i]==inf)d[i]=-1;
    rep(i,n){
        rep(j,n-1){
            cout<<d[i+n*j]<<' ';
        }
        cout<<d[i+n*(n-1)]<<'\n';
    }
    return 0;
}