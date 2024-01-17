#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int inf=1e18+1;

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<vector<ll>> d(n,vector<ll>(n,inf));
    vector<vector<ll>> s(n,vector<ll>(n,0));
    rep(i,n)cin>>a[i];
    rep(i,n){
        string t;
        cin>>t;
        rep(j,n){
            if(t[j]=='Y'){
                d[i][j]=1;
                s[i][j]=a[j];
            }
            if(i==j)d[i][j]=0;
        }
    }
    rep(k,n)rep(i,n)rep(j,n){
        if((d[i][k]+d[k][j])<d[i][j]){
            d[i][j]=d[i][k]+d[k][j];
            s[i][j]=s[i][k]+s[k][j];
        }else if(((d[i][k]+d[k][j])==d[i][j])&&((s[i][k]+s[k][j])>s[i][j])){
            s[i][j]=s[i][k]+s[k][j];
        }
    }
    int q;cin>>q;
    rep(i,q){
        int u,v;
        cin>>u>>v;
        u--;v--;
        if(d[u][v]==inf)cout<<"Impossible"<<'\n';
        else {
            cout<<d[u][v]<<' ';
            printf("%lld\n",s[u][v]+a[u]);
        }
    } 
    return 0;
}