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
const ll inf=1e15+1;

int main(){
    ll n,k;cin>>n>>k;
    vector<vector<ll>> a(n,vector<ll>(n));
    vector<vector<ll>> d(n,vector<ll>(n,inf));
    rep(i,n)rep(j,n){
        cin>>a[i][j];
        if(a[i][j]==1){
            d[i][j]=1;
        }
    }
    rep(l,n){
        rep(i,n){
            rep(j,n){
                d[i][j]=min(d[i][j],d[i][l]+d[l][j]);
            }
        }
    }
    int q;cin>>q;
    rep(qi,q){
        ll s,t;cin>>s>>t;
        s--;t--;
        if(d[s%n][t%n]!=inf)cout<<d[s%n][t%n]<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}