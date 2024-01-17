#include <iostream>
#include <vector>
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
const int MOD = 998244353;

int main(){
    int n;cin>>n;
    ll dp[9];
    rep(i,9){
        dp[i]=1;
    }
    rep(i,n-1){
        ll d[9];
        rep(j,9){
            if(j==0){
                d[j]=dp[j]+dp[j+1];
            }else if(j==8){
                d[j]=dp[j]+dp[j-1];
            }else{
                d[j]=dp[j]+dp[j+1]+dp[j-1];
            }
            d[j]%=MOD;
        }
        rep(j,9){
            dp[j]=d[j];
        }
    }
    ll ans=0;
    rep(i,9){
        ans+=dp[i];
        ans%=MOD;
    }
    
    printf("%lld\n",ans);
    return 0;
}