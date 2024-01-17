#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll ans=0;
    int n;cin>>n;
    vector<ll> m(2*1e5+1,0);
    for(int a=1;a<=2*1e5;a++){
        for(int b=1;a*b<=2*1e5;b++){
            m[a*b]++;
        }
    }
    //rep(i,n+1)cout<<m[i]<<endl;
    for(int i=1;i<n;i++){
        ans+=m[i]*m[n-i];
    }
    cout<<ans<<endl;
    return 0;
}