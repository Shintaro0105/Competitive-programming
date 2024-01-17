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
    int n;cin>>n;
    string s[n];
    rep(i,n){
        cin>>s[i];
    }
    vector<vector<int>> cnt(10,vector<int>(10,0));
    rep(i,n){
        rep(j,10){
            int c=s[i][j]-'0';
            cnt[c][j]++;
        }
    }
    int ans=inf;
    rep(i,10){
        int t=0;
        rep(j,10){
            if(cnt[i][j]>0){
                t=max(t,cnt[i][j]*10-10+j);
            }
        }
        ans=min(t,ans);
    }
    cout<<ans<<endl;
    return 0;
}