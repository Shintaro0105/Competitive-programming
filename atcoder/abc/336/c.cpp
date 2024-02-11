#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    n--;
    ll ans=0,i=1;
    vector<ll> c(5);
    c={0,2,4,6,8};
    while(n!=0){
        ans+=i*c[n%5];
        i*=10;
        n/=5;
    }
    cout<<ans<<endl;
    return 0;
}