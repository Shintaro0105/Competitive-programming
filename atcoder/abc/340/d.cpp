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
using P = pair<ll,int>;
const ll inf=1e18+1;

int main(){
    int n;cin>>n;
    vector<vector<pair<int,ll>>> g(n);
    rep(i,n-1){
        ll a,b;cin>>a>>b;
        int x;cin>>x;x--;
        g[i].push_back(make_pair(i+1,a));
        g[i].push_back(make_pair(x,b));
    }
    vector<ll> d(n,inf);
    priority_queue<P,vector<P>,greater<P>> pq;
    pq.emplace((d[0]=0),0);
    while(!pq.empty()){
        auto [dis,from]=pq.top();
        pq.pop();
        if(d[from]<dis){
            continue;
        }
        for(auto [to,cost]:g[from]){
            ll newd=d[from]+cost;
            if(newd<d[to]){
                pq.emplace((d[to]=newd),to);
            }
        }
    }
    cout<<d[n-1]<<endl;
    return 0;
}