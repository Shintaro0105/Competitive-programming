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
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    sort(ALL(a),greater<ll>());
    ll sum=0;
    rep(i,n){
        sum+=a[0]-a[i];
    }
    ll ans=sum;
    rep(i,n-1){
        sum-=(a[i]-a[i+1])*(n-1-i);
        ans+=sum;
    }
    cout<<ans<<endl;
    return 0;
}