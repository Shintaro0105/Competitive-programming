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
    ll n,x,y;
    cin>>n>>x>>y;
    ll r[n+1];
    r[n]=1;
    ll ans=0;
    rep(i,n-1){
        ans+=x*r[n-i];
        r[n-i-1]=r[n-i]+ans;
        ans*=y;
    }
    cout<<ans<<endl;
    return 0;
}