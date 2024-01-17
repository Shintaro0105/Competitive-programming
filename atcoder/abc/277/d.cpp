#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;

int main(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    ll sum=0;
    rep(i,n)sum+=a[i];
    vector<int> g(n,-1);
    rep(i,n-1){
        if(a[i+1]==a[i]||a[i+1]==(a[i]+1)%m){
            g[i]=i+1;
        }
    }
    if(a[0]==(a[n-1]+1)%m)g[n-1]=0;
    vector<bool> f(n,true);
    ll ans=sum;
    rep(i,n){
        if(f[i]){
            int j=i;
            ll res=a[i];
            f[i]=false;
            while(g[i]!=-1){
                i=g[i];
                res+=a[i];
                f[i]=false;
                if(i==j)break;
            }
            ans=min(ans,sum-res);
        }
    }
    cout<<ans<<endl;
    return 0;
}