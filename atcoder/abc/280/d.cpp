#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll k;cin>>k;
    ll ans=1;
    for(ll p=2;(p*p)<=k;p++){
        if(k%p!=0)continue;
        ll a=0;
        while(k%p==0){
            a++;
            k/=p;
        }
        ll n=0;
        while(a>0){
            n+=p;
            ll x=n;
            while(x%p==0){
                a--;
                x/=p;
            }
        }
        ans=max(ans,n);
    }
    ans=max(ans,k);
    cout<<ans<<endl;
    return 0;
}