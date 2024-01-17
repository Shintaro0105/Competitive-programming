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
const int inf=2e9+1;

int main(){
    int n;cin>>n;
    vector<P> x;
    rep(i,n){
        int a,b;cin>>a>>b;
        x.push_back({a,1});
        x.push_back({a+b,-1});
    }
    sort(x.begin(),x.end());
    int cnt=0;
    vector<int> ans(n+1,0);
    rep(i,x.size()-1){
        cnt+=x[i].second;
        ans[cnt]+=x[i+1].first-x[i].first;
    }
    rep(i,n-1)cout<<ans[i+1]<<' ';
    cout<<ans[n]<<endl;
    return 0;
}