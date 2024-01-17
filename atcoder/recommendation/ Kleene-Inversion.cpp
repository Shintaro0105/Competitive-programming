#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int mod=1e9+7;

int main(){
    ll n,k;cin>>n>>k;
    ll a[n];
    rep(i,n)cin>>a[i];
    ll b[2001];
    rep(i,2001)b[i]=0;
    rep(i,n)b[a[i]]++;
    ll c[2001];
    c[0]=0;
    rep(i,2000){
        c[i+1]=c[i]+b[i];
    }
    ll ans=0;
    ll x=k*(k-1)/2;
    x%=mod;
    rep(i,n){
        ll cnt=0;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])cnt++;
        }
        ans+=k*cnt;
        ans%=mod;
        ans+=c[a[i]]*x;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}