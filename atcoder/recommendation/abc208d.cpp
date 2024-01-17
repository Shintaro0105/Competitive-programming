#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll inf=1L<<60;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> dist(n,vector<ll>(n,inf));
    rep(i,n)dist[i][i]=0;
    rep(i,m){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        dist[a][b]=c;
    }
    ll ans=0;
    rep(k,n){
        vector<vector<ll>> d(n,vector<ll>(n,inf));
        rep(i,n)rep(j,n){
            d[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            if(d[i][j]<inf)ans+=d[i][j];
        }
        swap(d,dist);
    }
    cout<<ans<<endl;
    return 0;
}