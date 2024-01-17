#include <iostream>
#include <vector>
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
const int MOD = 998244353;

void solve(){
    int n; string s;
    cin>>n>>s;
    int l =(n+1)/2;
    vector<ll> pw(l);
    pw[0]=1;
    rep(i,l-1){
        pw[i+1]=(pw[i]*26)%MOD;
    }
    ll ans=0;
    string t;
    rep(i,l){
        int x=s[i]-'A';
        ans+=(pw[l-i-1]*x)%MOD;
        ans%=MOD;
    }
    t = s.substr(0,n-l);
    reverse(t.begin(),t.end());
    t = s.substr(0,l)+t;
    if(t<=s) ans++;
    ans%=MOD;
    cout<<ans<<endl;
}

int main(){
    int T;cin>>T;
    rep(Ti,T) solve();
    return 0;
}