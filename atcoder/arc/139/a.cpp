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

int ctz(ll x){
    int cnt=0;
    ll X=x;
    while(1){
        if(X%2==0)cnt++;  
        else break;
        X/=2;
    }
    return cnt;
}

int main(){
    int n;cin>>n;
    int t[n];
    rep(i,n){
        cin>>t[i];
    }
    ll ans;
    ans=pow(2,t[0]);
    //cout<<ctz(ans)<<endl;
    for(int i=1;i<n;i++){
        ll x;
        x=pow(2,t[i]);
        if(ans<x)ans=x;
        else ans+=x;
        int y=ctz(ans);
        if(y<t[i]){
            ans-=x;
            int y=ctz(ans);
        }
        while(y<t[i]){

            ll z=pow(2,y);
            ans+=z;
            y=ctz(ans);
            
        }
        if(y>t[i])ans+=pow(2,t[i]);
        //cout<<ans<<endl;
    }
    printf("%lld\n",ans);
    return 0;
}