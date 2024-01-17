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

ll enum_divisors(ll N,ll n) {
    vector<ll> res;
    for (ll i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            if(i<=n&&N/i<=n){
                res.push_back(i);
                if (N/i != i) res.push_back(N/i);
            }
            // 重複しないならば i の相方である N/i も push
        }
    }
    // 小さい順に並び替える
    return res.size();
}


int main(){
    int n;cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+=enum_divisors(i*i,n);
    }
    cout<<ans<<endl;
    return 0;
}