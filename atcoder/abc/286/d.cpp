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
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n);
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    vector<bool> dp(x+1,false);
    dp[0]=true;
    rep(i,n){
        vector<bool> p(x+1,false);
        rep(j,b[i]+1){
            rep(k,x+1){
                if(k+j*a[i]<=x&&dp[k]){
                    p[k+j*a[i]]=true;
                }
            }
        }
        swap(p,dp);
    }
    if(dp[x])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}