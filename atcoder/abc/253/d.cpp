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

ll gcd(ll a, ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

ll lcm(ll a, ll b){
    return a*b / gcd(a, b);
}

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=n*(n+1)/2;
    ll A=0,B=0,AB=0;
    ll c=n/a;
    A+=a*c*(c+1)/2;
    ll d=n/b;
    B+=b*d*(d+1)/2;
    ll l=lcm(a,b);
    ll e=n/l;
    AB+=l*e*(e+1)/2;
    printf("%lld\n",ans-A-B+AB);
    return 0;
}