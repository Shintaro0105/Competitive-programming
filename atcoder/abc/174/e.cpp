#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    ll l=0,r=-1;
    rep(i,n){
        cin>>a[i];
        r=max(r,a[i]);
    }
    r++;
    while(r-l>1){
        ll mid=l+(r-l)/2;
        ll cnt=0;
        rep(i,n){
            if(a[i]%mid==0)cnt+=a[i]/mid-1;
            else cnt+=a[i]/mid;
        }
        if(cnt>k){
            l=mid;
        }else{
            r=mid;
        }
    }
    cout<<r<<endl;
    return 0;
}