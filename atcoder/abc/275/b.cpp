#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll mod=998244353;

int main(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<(mod*mod+(((a%mod)*(b%mod))%mod)*(c%mod)-(((d%mod)*(e%mod))%mod)*(f%mod))%mod<<endl;
    return 0;
}