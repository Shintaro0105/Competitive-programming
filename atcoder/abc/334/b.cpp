#include <iostream>
using namespace std;
using ll = long long int;

ll f(ll x,ll m){
    ll r=(x%m+m)%m;
    return (x-r)/m;
}

int main(){
    ll a,m,l,r;cin>>a>>m>>l>>r;
    cout<<f(r-a,m)-f(l-a-1,m)<<endl;
}