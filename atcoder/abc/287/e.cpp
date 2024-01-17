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
    int n;
    cin>>n;
    vector<pair<string,int>> s(n);
    rep(i,n){
        string t;
        cin>>t;
        s[i]=make_pair(t,i);
    }
    vector<int> ans(n);
    sort(s.begin(),s.end());
    rep(i,n){
        if(i!=0){
            auto [a,b]=s[i];
            auto [c,d]=s[i-1];
            rep(j,min(a.size(),c.size())){
                if(a[j]!=c[j])break;
                ans[b]=max(j+1,ans[b]);
                ans[d]=max(j+1,ans[d]);
            }
        }
    }
    rep(i,n)cout<<ans[i]<<'\n';
    return 0;
}