#include <iostream>
#include <set>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    set<ll> s;
    for(ll a=2;a<=1e5;a++){
        for(ll b=2;pow(a,b)<=n;b++){
            s.insert(pow(a,b));
        }
    }
    cout<<n-s.size()<<endl;
    return 0;
}