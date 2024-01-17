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
const ll inf=1L<<60;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<ll>> dist(n,vector<ll>(n,inf));
    rep(i,n)dist[i][i]=0;
    rep(i,m){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        dist[a][b]=c;
    }
    ll ans=0;
    rep(k,n){
        vector<vector<ll>> nxt(n,vector<ll>(n));
        rep(j,n)rep(i,n){
            nxt[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            if(nxt[i][j]<inf){
                ans+=nxt[i][j];
            }
        }
        swap(nxt,dist);
    }
    cout<<ans<<endl;
    return 0;
}