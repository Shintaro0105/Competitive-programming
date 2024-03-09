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
    string t;cin>>t;
    int n;cin>>n;
    vector<int> a(n);
    vector<map<string,int>> mp(n);
    rep(i,n){
        cin>>a[i];
        rep(j,a[i]){
            string s;cin>>s;
            mp[i][s]++;
        }
    }
    int l=t.size();
    vector<int> dp(l+1,inf);
    dp[0]=0;
    rep(i,n){
        string s;
        vector<int> p(l+1,inf);
        rep(j,l+1){
            p[j]=min(dp[j],p[j]);
            string s;
            rep(k,10){
                if(j+k+1>l)break;
                s+=t[j+k];
                if(mp[i].count(s)){
                    p[j+k+1]=min(p[j+k+1],dp[j]+1);
                }
            }
        }
        dp=p;
    }
    if(dp[l]==inf)cout<<-1<<endl;
    else cout<<dp[l]<<endl;
    return 0;
}