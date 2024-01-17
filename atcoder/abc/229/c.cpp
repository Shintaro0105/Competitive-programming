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
    int n,w;cin>>n>>w;
    vector<P> p(n);
    rep(i,n){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    ll ans=0;
    int j=0;
    while(w){
        if(p[j].second==0)j++;
        if(j==n)break;
        ans+=p[j].first;
        p[j].second--;
        w--;
    }
    cout<<ans<<endl;
    return 0;
}