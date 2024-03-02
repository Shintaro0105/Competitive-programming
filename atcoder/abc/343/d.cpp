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
    int n,t;cin>>n>>t;
    vector<ll> sum(n,0);
    set<ll> s;
    s.insert(0);
    map<ll,ll> mp;
    mp[0]=n;
    rep(i,t){
        int a;cin>>a;a--;
        ll b;cin>>b;
        mp[sum[a]]--;
        if(mp[sum[a]]==0)s.erase(sum[a]);
        sum[a]+=b;
        mp[sum[a]]++;
        s.insert(sum[a]);
        cout<<s.size()<<endl;
    }
    return 0;
}