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

int main(){
    ll n,m,k;cin>>n>>m>>k;
    ll lc=lcm(n,m);
    ll l=-1,r=2e18+1,mid;
    while(r-l>1){
        mid=l+(r-l)/2;
        ll sum=mid/n+mid/m-(ll)(mid/lc)*2;
        if(sum<k){
            l=mid;
        }else{
            r=mid;
        }
    }
    cout<<r<<endl;
    return 0;
}