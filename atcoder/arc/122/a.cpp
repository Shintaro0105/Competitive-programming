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
#include <bitset>
#include <deque>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int mod=1000000007;


int main(){
    int n;cin>>n;
    int a[n];
    rep(i,n)cin>>a[i];
    vector dp(n,vector<int>(2,0));
    dp[0][0]=a[i];
    dp[0][1]=a[i];
    rep(i,n-1){
        dp[i+1][0]=dp[i][0]+dp[i][1];
        dp[i+1][1]=dp[i][0];
    }
}