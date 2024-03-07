#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    rep(i,n)cin>>a[i];
    vector<ll> s(n+1,0),ma(n+1,0);
    rep(i,n){
        s[i+1]=s[i]+a[i];
        ma[i+1]=max(ma[i],s[i+1]);
    }
    ll ans=a[0],sum=0;
    rep(i,n){
        ans=max(ans,sum+ma[i+1]);
        sum+=s[i+1];
    }
    cout<<ans<<endl;
    return 0;
}