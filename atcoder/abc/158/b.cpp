#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll n,a,b;cin>>n>>a>>b;
    cout<<(ll)(n/(a+b))*a+min(n%(a+b),a)<<endl;
    return 0;
}