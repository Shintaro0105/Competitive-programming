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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,q;cin>>n>>q;
    vector<ll> r(n);
    rep(i,n)cin>>r[i];
    sort(ALL(r));
    vector<ll> s(n+1,0);
    rep(i,n){
        s[i+1]+=s[i]+r[i];
    }
    rep(qi,q){
        ll x;cin>>x;
        auto it=lower_bound(ALL(s),x+1);
        cout<<it-s.begin()-1<<endl;
    }
    return 0;
}