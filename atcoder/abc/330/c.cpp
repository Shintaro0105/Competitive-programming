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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    ll d;cin>>d;
    ll ans=1e18+1;
    for(ll x=sqrt(d)+1;x>=0;x--){
        ll y=sqrt(abs(x*x-d));
        ans=min(ans,min(abs(x*x+y*y-d),abs(x*x+(y+1)*(y+1)-d)));
    }
    cout<<ans<<endl;
    return 0;
}