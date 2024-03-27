#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    set<ll> s;
    rep(i,n){
        cin>>a[i];
        s.insert(a[i]);
    }
    ll ans=k*(k+1)/2;
    for(auto i:s){
        if(i<=k)ans-=i;
    }
    cout<<ans<<endl;
    return 0;
}