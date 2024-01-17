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
    int n,q;cin>>n>>q;
    vector<int> a(n-1),b(n-1);
    vector<vector<int>> g(n);
    rep(i,n-1){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    vector<ll> ans(n,0);
    rep(i,q){
        ll p,x;cin>>p>>x;
        p--;
        ans[p]+=x;
    }
    queue<P> qu;
    qu.push(make_pair(0,-1));
    while(!qu.empty()){
        auto [from,past]=qu.front();qu.pop();
        for(int to:g[from]){
            if(to!=past){
                ans[to]+=ans[from];
                qu.push(make_pair(to,from));
            }
        }
    }
    rep(i,n-1)cout<<ans[i]<<' ';
    cout<<ans[n-1]<<endl;
    return 0;
}