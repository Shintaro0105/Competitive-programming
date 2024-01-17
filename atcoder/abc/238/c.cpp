#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll mod=998244353;

int main(){
    ll n;cin>>n;
    ll k=n;
    ll ans=0;
    int cnt=0;
    while(k>0){
        cnt++;
        k/=10;
    }
    //cout<<cnt<<endl;
    cnt--;
    ll d=1;
    rep(i,cnt){
        d*=10;
    }
    //cout<<d<<endl;
    k=n;
    rep(i,cnt+1){
        ll sum=1;
        sum*=(((k-d+1)%mod)*((k-d+2)%mod))/2;
        sum%=mod;
        k=d-1;
        d/=10;
        ans+=sum;
        ans%=mod;
        //cout<<sum<<endl;
    }
    cout<<ans<<endl;
    return 0;
}