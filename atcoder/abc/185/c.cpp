#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long int;

map<pair<ll,ll>,ll> nCr;

ll c(ll n,ll k){
    if(nCr.count({n,k})){
        return nCr[{n,k}];
    }else if(n==k||k==0){
        nCr[{n,k}]=1;
        return 1;
    }else{
        nCr[{n,k}]=c(n-1,k-1)+c(n-1,k);
        return nCr[{n,k}];
    }
}

int main(){
    ll l;cin>>l;
    cout<<c(l-1,11)<<endl;
    return 0;
}