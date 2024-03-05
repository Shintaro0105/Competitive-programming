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
    double a,b,c;
    cin>>a>>b>>c;
    vector dp(101,vector<vector<double>>(101,vector<double>(101,0)));
    dp[a][b][c]=1;
    rep(i,100){
        rep(j,100){
            rep(k,100){
                if(i+j+k>0){
                    dp[i+1][j][k]+=dp[i][j][k]*i/(i+j+k);
                    dp[i][j+1][k]+=dp[i][j][k]*j/(i+j+k);
                    dp[i][j][k+1]+=dp[i][j][k]*k/(i+j+k);
                }
            }
        }
    }
    double ans=0;
    rep(i,100){
        rep(j,100){
            ans+=dp[100][i][j]*(100-a+i-b+j-c);
            ans+=dp[i][100][j]*(100-a+i-b+j-c);
            ans+=dp[i][j][100]*(100-a+i-b+j-c);
        }
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;
    return 0;
}