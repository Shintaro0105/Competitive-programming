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
using P = pair<ll,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<P> p(n);
    vector<ll> a(n),s(n+1,0);
    rep(i,n){
        cin>>a[i];
        p[i]=make_pair(a[i],i);
    }
    sort(p.begin(),p.end());

    rep(i,n){
        s[i+1]=s[i]+p[i].first;
    }
    for(int i=n;i>1;i--){
        if(p[i-1].first==p[i-2].first){
            s[i-1]=s[i];
        }
    }
    vector<ll> b(n);
    rep(i,n){
        b[p[i].second]=s[n]-s[i+1];
    }
    rep(i,n-1)cout<<b[i]<<' ';
    cout<<b[n-1]<<endl;
    return 0;
}