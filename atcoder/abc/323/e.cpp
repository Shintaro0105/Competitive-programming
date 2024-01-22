#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

ll modinv(ll a,ll m){
    ll b=m,u=1,v=0;
    while(b){
        ll t=a/b;
        a-=t*b;swap(a,b);
        u-=t*v;swap(u,v);
    }
    u%=m;
    if(u<0)u+=m;
    return u;
}

int main(){
    int n,x;
    ll r,ans=0;
    cin>>n>>x;
    vector<int> t(n);
    rep(i,n)cin>>t[i];
    vector<ll> p(x+1,0);
    r=modinv(n,mod);
    p[0]=1;
    if(t[0]>x){
        ans+=(p[0]*r)%mod;
        ans%=mod;
    }
    for(int i=1;i<=x;i++){
        rep(j,n){
            if(t[j]<=i){
                p[i]+=p[i-t[j]];
                p[i]%=mod;
            }
        }
        p[i]*=r;
        p[i]%=mod;
        if(i+t[0]>x){
            ans+=p[i]*r;
            ans%=mod;
        }
    }
    cout<<ans<<endl;
    return 0;
}