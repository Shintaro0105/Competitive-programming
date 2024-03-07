#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int inf=1e9+1;

int main(){
    ll n;
    cin>>n;
    vector<ll> a;
    while(n){
        a.push_back(n%10);
        n /= 10;
    }
    ll ans=inf;
    rep(i,1L<<a.size()){
        ll sum = 0,k=0;
        rep(j,a.size()){
            if(i&(1<<j)){
                sum += a[j];
            }else{
                k++;
            }
        }
        if(sum%3==0)ans=min(ans,k);
    }
    if(ans!=a.size())cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}