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
    ll h,w,m;cin>>h>>w>>m;
    vector<pair<ll,ll>> r(h),c(w);
    rep(i,h){
        r[i]=make_pair(0,0);
    }
    rep(i,w){
        c[i]=make_pair(-1,-1);
    }
    rep(i,m){
        int t,a,x;cin>>t>>a>>x;
        a--;
        if(t==1){
            r[a]=make_pair(i+1,x);
        }else{
            c[a]=make_pair(i+1,x);
        }
    }
    map<ll,ll> mpr,mpc,ans;
    vector<ll> rr(h,0),cc(w,0);
    rep(i,h){
        ans[r[i].second]=0;
        mpr[r[i].second]++;
        rr[i]=r[i].first;
    }
    rep(i,w){
        ans[c[i].second]=0;
        mpc[c[i].second]++;
        cc[i]=c[i].first;
    }
    sort(ALL(rr));
    sort(ALL(cc));
    rep(i,h){
        ans[r[i].second]+=w-(ll)(cc.end()-lower_bound(ALL(cc),r[i].first+1));
    }
    rep(i,w){
        ans[c[i].second]+=h-(ll)(rr.end()-lower_bound(ALL(rr),c[i].first+1));
    }
    vector<pair<ll,ll>> v;
    for(auto x:ans){
        if(x.first==-1)continue;
        if(x.second==0)continue;
        if(mpc.count(x.first)&&mpr.count(x.first)){
            v.push_back(make_pair(x.first,x.second));
        }else{
            v.push_back(x);
        }
    }
    sort(ALL(v));
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}