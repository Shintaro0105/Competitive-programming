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
    int n,d;
    cin>>n>>d;
    vector<P> p(n);
    rep(i,n){
        int l,r;
        cin>>l>>r;
        p[i]=make_pair(r,l);
    }
    sort(p.begin(),p.end());
    ll x=-(1LL<<40),ans=0;
    for(auto& [r,l]:p){
        if(x+d-1<l){
            ans++;
            x=r;
        }
    }
    cout<<ans<<endl;
    return 0;
}