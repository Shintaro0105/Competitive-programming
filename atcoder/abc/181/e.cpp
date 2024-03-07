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
    int n,m;cin>>n>>m;
    vector<ll> h(n),w(m);
    rep(i,n)cin>>h[i];
    rep(i,m)cin>>w[i];
    sort(ALL(h));
    sort(ALL(w));
    ll sum=0;
    for(int i=2;i<n;i+=2){
        sum+=h[i]-h[i-1];
    }
    auto it=lower_bound(ALL(w),h[0]);
    ll ans=1e18;
    if(it!=w.end()){
        ans=min(ans,sum+*it-h[0]);
    }
    if(it!=w.begin()){
        it--;
        ans=min(ans,sum+h[0]-*it);
    }
    for(int i=1;i<n;i++){
        if(i%2==0){
            sum-=h[i]-h[i-2];
            sum+=h[i-1]-h[i-2];
            auto it=lower_bound(ALL(w),h[i]);
            if(it!=w.end()){
                ans=min(ans,sum+*it-h[i]);
            }
            if(it!=w.begin()){
                it--;
                ans=min(ans,sum+h[i]-*it);
            }
        }else{
            sum-=h[i+1]-h[i];
            sum+=h[i+1]-h[i-1];
            auto it=lower_bound(ALL(w),h[i]);
            if(it!=w.end()){
                ans=min(ans,sum+*it-h[i]);
            }
            if(it!=w.begin()){
                it--;
                ans=min(ans,sum+h[i]-*it);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}