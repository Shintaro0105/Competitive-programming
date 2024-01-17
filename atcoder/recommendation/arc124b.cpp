#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int  n;cin>>n;
    vector<ll> a(n),b(n);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<ll> ans;
    rep(i,n){
        ll x=a[0]^b[i];
        vector<ll> c(n);
        c[0]=b[i];
        rep(j,n-1){
            c[j+1]=a[j+1]^x;
        }
        sort(c.begin(),c.end());
        if(b==c)ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    for(ll x:ans)cout<<x<<'\n';
    return 0;
}