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
const int inf=4e5+1;

int main(){
    int n,k;cin>>n>>k;
    vector<P> a(n);
    rep(i,n){
        cin>>a[i].first;
        a[i].second=-i;
    }
    sort(a.begin(),a.end());
    int mx=-inf,ans=inf;
    for(auto [v,i]:a){
        i=-i;
        if(i<k)mx=max(mx,i);
        else ans=min(ans,i-mx);
    }
    if(ans>=inf)ans=-1;
    cout<<ans<<endl;
    return 0;
}