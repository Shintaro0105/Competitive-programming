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
    int n,q;cin>>n>>q;
    ll a[n+1],b[n];
    a[0]=0;
    rep(i,n)cin>>b[i];
    sort(b,b+n);
    rep(i,n)a[i+1]=a[i]+b[i];
    rep(qi,q){
        ll x;cin>>x;
        int i=lower_bound(b,b+n,x)-b;
        if(i==0){
            cout<<a[n]-x*n<<endl;
        }else if(i==n){
            cout<<x*n-a[n]<<endl;
        }else{
            cout<<x*i-2*a[i]+a[n]-x*(n-i)<<endl;
        }
    }
    return 0;
}