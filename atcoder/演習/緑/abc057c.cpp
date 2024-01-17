#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    ll ans=1e10+1;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            //cout<<log10(i)<<endl;
            ans=min(ans,max((ll)(log10(i)+1),(ll)(log10(n/i))+1));
        }
    }
    cout<<ans<<endl;
    return 0;
}