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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    ll x;cin>>x;
    bool c[60];
    rep(i,60)c[i]=false;
    ll X=x;
    int cnt=0;
    rep(i,60){
        if((X&1)==1){
            cnt++;
            c[i]=true;
        }
        X/=2;
    }
    ll f[60];
    f[0]=1;
    rep(i,59){
        f[i+1]=2*f[i];
        //cout<<f[i+1]<<endl;
    }
    rep(i,1LL<<cnt){
        ll ans=0;
        ll j=i;
        rep(k,60){
            if(c[k]){
                if((j&1)==1){
                    ans+=f[k];
                }
                j/=2;
            }
        }
        if(ans!=0)cout<<ans<<'\n';
        if(i==0)cout<<ans<<'\n';
    }
    return 0;
}