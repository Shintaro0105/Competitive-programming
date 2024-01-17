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
using namespace std;
using ll = long long int;
const ll mod=998244353;

int main(){
    int q;cin>>q;
    queue<ll> qu;
    qu.push(1);
    vector<ll> m(6e5+1,0);
    m[0]=1;
    rep(i,6e5){
        m[i+1]=(m[i]*10)%mod;
    }
    ll ans=1;
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            ll x;
            cin>>x;
            qu.push(x);
            ans*=10;
            ans+=x;
            ans%=mod;
        }else if(t==2){
            int k=qu.size();
            ll n=qu.front();
            qu.pop();
            ans+=mod*mod-n*m[k-1];
            ans%=mod;
        }else if(t==3){
            cout<<ans<<endl;
        }
    }
    return 0;
}