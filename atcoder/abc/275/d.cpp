#include <iostream>
#include <map>
using namespace std;
using ll = long long int;

map<ll,ll> mp;

ll f(ll k){
    if(k==0){
        mp[0]=1;
        return 1;
    }
    if(mp[k]==0)mp[k]=f(k/2)+f(k/3);
    return mp[k];
}

int main(){
    ll n;cin>>n;
    cout<<f(n)<<endl;
    return 0;
}