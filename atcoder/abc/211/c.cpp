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
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int MOD=1000000007;

int main(){
    string S,T;cin>>S;
    T="chokudai";
    int n=S.size();
    int dp[n+1][9];
    rep(i,n+1){
        rep(j,9){
            if(j==0){
                dp[i][j]=1;
            }else if(i==0&&1<=j&&j<=8){
                dp[i][j]=0;
            }else if(1<=i&&i<=n&&1<=j&&j<=8&&S[i-1]!=T[j-1]){
                dp[i][j]=dp[i-1][j]%MOD;
            }else{
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%MOD;
            }
        }
    }

    cout<<dp[n][8]<<endl;

}