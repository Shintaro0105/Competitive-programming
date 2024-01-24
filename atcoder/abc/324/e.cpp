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
    int n;cin>>n;
    string t;cin>>t;
    int l=t.size();
    vector<string> s(n);
    vector<int> su(n,0),pr(n,0);
    rep(i,n){
        cin>>s[i];
        int now=0;
        rep(j,s[i].size()){
            if(now<l){
                if(s[i][j]==t[now])now++;
            }
        }
        su[i]=now;
    }
    reverse(ALL(t));
    rep(i,n){
        reverse(ALL(s[i]));
        int now=0;
        rep(j,s[i].size()){
            if(now<l){
                if(s[i][j]==t[now])now++;
            }
        }
        pr[i]=now;
    }
    sort(ALL(pr));
    ll ans=0;
    rep(i,n){
        auto it=lower_bound(ALL(pr),l-su[i]);
        ans+=(ll)(pr.end()-it);
    }
    cout<<ans<<endl;
    return 0;
}