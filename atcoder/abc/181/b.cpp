#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    ll ans=0;
    rep(i,n){
        ll a,b;cin>>a>>b;
        ans+=(b-a+1)*(a+b)/2;
    }
    cout<<ans<<endl;
    return 0;
}