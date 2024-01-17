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
    ll n;cin>>n;
    vector<ll> a(n);
    ll sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    ll mid=sum/n,r=sum%n;
    sort(ALL(a));
    ll ans=0;
    rep(i,n){
        if(i<n-r){
            ans+=abs(mid-a[i]);
        }else{
            ans+=abs(a[i]-mid-1);
        }
    }
    cout<<ans/2<<endl;
    return 0;
}