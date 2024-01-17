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
    string s;cin>>s;
    int n=s.size();
    vector<vector<ll>> d(n,vector<ll>(26,0));
    rep(i,n){
        int k=s[i]-'a';
        d[i][k]++;
    }
    rep(i,n-1){
        rep(j,26){
            d[i+1][j]+=d[i][j];
        }
    }
    vector<P> p;
    rep(i,n-2){
        int k=s[i]-'a';
        if(s[i]==s[i+1])p.push_back({i+1,k});
    }
    reverse(p.begin(),p.end());
    ll ans=0;
    for(auto [i,k]:p){
        ll sum=0;
        rep(j,26){
            if(j!=k){
                sum+=d[n-1][j]-d[i][j];
                d[n-1][j]-=d[n-1][j]-d[i][j];
            }
        }
        ans+=sum;
        d[n-1][k]+=sum;
    }
    cout<<ans<<endl;
    return 0;
}