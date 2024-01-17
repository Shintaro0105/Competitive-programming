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
    int n,m,q;cin>>n>>m>>q;
    vector<int> w(n),v(n),x(m);
    vector<P> p(n);
    rep(i,n){
        cin>>w[i]>>v[i];
        p[i]={v[i],w[i]};
    }
    sort(p.rbegin(),p.rend());
    rep(i,m)cin>>x[i];
    rep(qi,q){
        multiset<int> s;
        int l,r;cin>>l>>r;
        l--;r--;
        rep(i,l){
            s.insert(x[i]);
        }
        for(int i=m-1;i>r;i--){
            s.insert(x[i]);
        }
        int i=0;
        int ans=0;
        while(!s.empty()){
            auto it=s.lower_bound(p[i].second);
            if(it!=s.end()){
                s.erase(it);
                ans+=p[i].first;
            }
            if(i<n-1)i++;
            else break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}