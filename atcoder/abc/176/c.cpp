#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    ll ans=0,f=1;
    rep(i,n){
        cin>>a[i];
        f=max(f,a[i]);
        ans+=f-a[i];
    }
    cout<<ans<<endl;
    return 0;
}