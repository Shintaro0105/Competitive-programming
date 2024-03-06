#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    ll t;cin>>t;
    vector<ll> a(n);
    rep(i,n)cin>>a[i];
    vector<ll> b={0},c={0};
    rep(i,n){
        for(int j=b.size()-1;j>=0;j--){
            b.push_back(b[j]+a[i]);
        }
        swap(b,c);
    }
    sort(ALL(b),greater<ll>());
    ll ans=0;
    for(ll i:c){
        if(i>t)continue;
        i+=*lower_bound(ALL(b),t-i,greater<ll>());
        ans=max(ans,i);
    }
    cout<<ans<<endl;
    return 0;
}