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
    int n;cin>>n;
    vector<P> p(n);
    rep(i,n){
        int f,s;cin>>f>>s;
        p[i]=make_pair(-s,f);
    }
    sort(ALL(p));
    int ans=-p[0].first;
    rep(i,n-1){
        if(p[i+1].second==p[0].second){
            ans=max(ans,-p[0].first-p[i+1].first/2);
        }else{
            ans=max(ans,-p[0].first-p[i+1].first);
        }
    }
    cout<<ans<<endl;
    return 0;
}