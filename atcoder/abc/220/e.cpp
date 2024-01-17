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
    vector<ll> f(n+1),g(n+1);
    vector<ll> two(n+1);
    two[0]=1;
    rep(i,n){
        two[i+1]=two[i]*2;
        two[i+1]%=mod;
    }
    for(int i=1;i<=n;i++){
        g[i]=g[i-1];
        int l=i-1,r=d-l;
        ll leaf=0;
        if(0<=r&&r<=i-1){
            leaf=two[max(l-1,0)]*two[max(r-1,0)];
            if(l!=r)leaf*=2;
            leaf%=mod;
        }
        g[i]=g[i-1]+leaf;
        g[i]%=mod;
    }
    for(int i=1;i<=n;i++){
        f[i]=f[i-1]*2+g[i];
        f[i]%=mod;
    }
    cout<<f[n]*2%mod<<endl;
    return 0;
}