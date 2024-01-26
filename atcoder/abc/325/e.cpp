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
using P = pair<ll,ll>;
const int mod=998244353;
const ll inf=1e18+1;

int main(){
    ll n,a,b,c;cin>>n>>a>>b>>c;
    vector d(n,vector<ll>(n));
    rep(i,n){
        rep(j,n){
            cin>>d[i][j];
        }
    }
    vector dis(n,vector<ll>(2,inf));
    priority_queue<pair<ll,P>> pq;
    dis[0][0]=0;
    dis[0][1]=0;
    pq.emplace(0,make_pair(0,0));
    while(!pq.empty()){
        auto [dist,from]=pq.top();
        pq.pop();
        dist*=-1;
        if(dist>dis[from.first][from.second])continue;
        rep(i,n){
            if(i!=from.first){
                if(from.second==0){
                    ll dc,dt;
                    dc=dis[from.first][from.second]+a*d[from.first][i];
                    dt=dis[from.first][from.second]+b*d[from.first][i]+c;
                    if(dc<dis[i][from.second]){
                        dis[i][from.second]=dc;
                        pq.emplace(-dc,make_pair(i,0));
                    }
                    if(dt<dis[i][1]){
                        dis[i][1]=dt;
                        pq.emplace(-dt,make_pair(i,1));
                    }
                }else{
                    ll dt;
                    dt=dis[from.first][from.second]+b*d[from.first][i]+c;
                    if(dt<dis[i][1]){
                        dis[i][1]=dt;
                        pq.emplace(-dt,make_pair(i,1));
                    }
                }
            }
        }
    }
    /* rep(i,n){
        cout<<dis[i][0]<<' '<<dis[i][1]<<endl;
    } */
    cout<<min(dis[n-1][0],dis[n-1][1])<<endl;
    return 0;
}