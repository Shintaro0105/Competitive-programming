#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(ll i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> q(n),a(n),b(n);
    rep(i,n)cin>>q[i];
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    ll ans=0;
    rep(i,1e6+1){
        vector<ll> num(n,0);
        bool ok=true;
        rep(j,n){
            num[j]=q[j]-i*a[j];
            if(num[j]<(ll)0){
                ok=false;
                //cout<<num[j]<<' ';
            }
        }
        //cout<<endl;
        ll num_b=1e9;
        if(ok){
            rep(j,n){
                if(b[j]>0)num_b=min(num_b,num[j]/b[j]);
                //cout<<num[j]<<' ';
            }
            //cout<<endl;
            ans=max(ans,i+num_b);
        }
    }
    cout<<ans<<endl;
    return 0;
}