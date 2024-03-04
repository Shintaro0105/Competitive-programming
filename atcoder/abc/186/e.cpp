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

ll gcd(ll a,ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

ll lcm(ll a, ll b){
    return a*b / gcd(a, b);
}

long long extGCD(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a%b, y, x);
    y -= a/b * x;
    return d;
}

int main(){
    int t;cin>>t;
    rep(ti,t){
        ll n,s,k;cin>>n>>s>>k;
        if(s%gcd(n,k)!=0){
            cout<<-1<<endl;
        }else{
            ll x,y;
            ll g=extGCD(k,n,x,y);
            n /= g;
            s /= g;
            k /= g;
            ll ans = ((x*-s)%n+n)%n;
            cout << ans << endl;
        }
    }
    return 0;
}