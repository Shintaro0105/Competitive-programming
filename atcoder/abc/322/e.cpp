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
const ll inf=1e18+1;

int main(){
    int n,k,p;cin>>n>>k>>p;
    vector<ll> c(n);
    vector a(n,vector<int>(k));
    rep(i,n){
        cin>>c[i];
        rep(j,k)cin>>a[i][j];
    }
    vector<int> ok(k,0);
    rep(i,n){
        rep(j,k)ok[j]+=a[i][j];
    }
    bool flag=true;
    rep(i,k){
        if(ok[i]<p)flag=false;
    }
    if(flag){
        vector dp(n+1,vector<ll>(pow(p+1,k),inf));
        rep(i,n)dp[i][0]=0;
        rep(i,n){
            rep(j,pow(p+1,k)){
                vector<int> b(k);
                int now=j,next=0,m=1;
                rep(l,k){
                    b[l]=now%(p+1);
                    now/=(p+1);
                    b[l]+=a[i][l];
                    if(b[l]>=p)b[l]=p;
                    next+=m*b[l];
                    m*=p+1;
                }
                dp[i+1][next]=min(dp[i][j]+c[i],dp[i+1][next]);
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
            }
        }
        cout<<dp[n][pow(p+1,k)-1]<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}