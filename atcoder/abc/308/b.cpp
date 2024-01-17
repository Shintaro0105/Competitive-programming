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
    int n,m;cin>>n>>m;
    vector<string> c(n),d(m);
    vector<int> p(m+1);
    map<string,int> mp;
    rep(i,n){
        cin>>c[i];
    }
    rep(i,m){
        cin>>d[i];
    }
    rep(i,m+1){
        cin>>p[i];
        if(i!=0){
            mp[d[i-1]]=p[i];
        }
    }
    int ans=0;
    rep(i,n){
        if(mp.count(c[i])){
            ans+=mp[c[i]];
        }else{
            ans+=p[0];
        }
    }
    cout<<ans<<endl;
    return 0;
}