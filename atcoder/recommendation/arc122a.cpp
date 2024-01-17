#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll mod=1000000007;

int main(){
    int n;cin>>n;
    ll a[n];
    rep(i,n)cin>>a[i];
    ll dp[2];
    dp[0]=a[0];
    dp[1]=0;
    ll po=1,ne=0;
    rep(i,n-1){
        ll p[2];
        p[0]=dp[0]+po*a[i+1]+dp[1]+ne*a[i+1];
        p[0]%=mod;
        p[1]=dp[0]-po*a[i+1];
        p[1]%=mod;
        dp[0]=p[0];
        dp[1]=p[1];
        po=po+ne;
        ne=po-ne;
        po%=mod;
        ne%=mod;
        //cout<<dp[0]<<' '<<dp[1]<<' '<<po<<' '<<ne<<endl;
    }
    printf("%lld\n",(dp[0]+dp[1]+mod)%mod);
}