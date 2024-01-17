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
    ll n,k;cin>>n>>k;
    vector<P> p(n);
    rep(i,n){
        cin>>p[i].first;
        p[i].second=i;
    }
    sort(p.begin(),p.end());
    ll l=k/n;
    k-=l*n;
    ll ans[n];
    rep(i,n)ans[i]=l;
    int i=0;
    while(k){
        ans[p[i].second]++;
        i++;k--;
    }
    rep(i,n){
        cout<<ans[i]<<endl;
    }
    return 0;
}