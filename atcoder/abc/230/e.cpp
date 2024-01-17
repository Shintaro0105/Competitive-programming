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
    ll n;
    cin>>n;
    ll ans=0;
    ll k=sqrt(n);
    for(int i=1;i<=k;i++){
        ans+=i*(n/i-n/(i+1));
    }
    for(int i=1;i<=n/(k+1);i++){
        ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}