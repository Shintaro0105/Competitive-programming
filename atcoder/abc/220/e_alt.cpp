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
    int n,d;cin>>n>>d;
    vector<ll> two(n+1);
    two[0]=1;
    rep(i,n){
        two[i+1]=2*two[i];
        two[i+1]%=mod;
    }
    ll ans=0;
    rep(i,d+1){
        int j=d-i;
        if(i>=n)continue;
        if(j>=n)continue;
        ll now=two[n-max(i,j)]-1;
        now%=mod;
        now*=two[max(i-1,0)];
        now%=mod;
        now*=two[max(j-1,0)];
        now%=mod;
        ans+=now;
        ans%=mod;
    }
    ans*=2;
    ans%=mod;
    cout<<ans<<endl;
    return 0;
}