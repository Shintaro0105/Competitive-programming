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

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    map<vector<ll>,ll> mp;
    ll cnt=0;
    rep(i,n){
        cin>>a[i];
        auto res = prime_factorize(a[i]);
        vector<ll> p;
        for(auto r:res){
            if(r.second%2==1)p.push_back(r.first);
        }
        sort(ALL(p));
        if(a[i]!=0)mp[p]++;
        else cnt++;
    }
    ll ans=0;
    for(auto r:mp){
        ans+=r.second*(r.second-1)/2;
    }
    ll sum=0;
    rep(i,cnt){
        sum+=(ll)(n-1-i);
    }
    cout<<ans+sum<<endl;
    return 0;
}