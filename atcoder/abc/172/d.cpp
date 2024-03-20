#include <iostream>
#include <vector>
#define rep(i,n) for(ll i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    vector<ll> cnt(n+1,0);
    for(int i = 1;i <= n;i++){
        for(int j = i;j <= n;j+=i){
            cnt[j]++;
        }
    }
    ll ans=0;
    rep(i,n+1){
        ans+=i*cnt[i];
    }
    cout<<ans<<endl;
    return 0;
}