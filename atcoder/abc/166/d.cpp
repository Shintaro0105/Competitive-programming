#include <iostream>
using namespace std;
using ll = long long int;

ll f(ll n){
    return n*n*n*n*n;
}

int main(){
    ll x;cin>>x;
    for(ll a=-1000;a<=1000;a++){
        for(ll b=-1000;b<=1000;b++){
            if(f(a)-f(b)==x){
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    return 0;
}