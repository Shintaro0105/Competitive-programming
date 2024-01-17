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


int main(){
    int n,k;cin>>n>>k;
    int a[n],b[n];
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    int dp[2];
    dp[0]=a[0];
    dp[1]=b[0];
    rep(i,n-1){
        int A=2e9+1,B=2e9+1;
        if(abs(dp[0]-a[i+1])<=k&&abs(dp[1]-b[i+1])<=k){
            A=a[i+1];
            B=b[i+1];
        }else if(abs(dp[0]-a[i+1])<=k){
            A=a[i+1];
        }else if(abs(dp[1]-b[i+1])<=k){
            A=b[i+1];
        }else if(abs(dp[0]-b[i+1])<=k){
            A=b[i+1];
        }else if(abs(dp[1]-a[i+1])<=k){
            A=a[i+1];
        }
        if(abs(dp[0]-b[i+1])<=k&&abs(dp[1]-a[i+1])<=k){
            A=a[i+1];
            B=b[i+1];
        }else if(abs(dp[0]-b[i+1])<=k){
            A=b[i+1];
        }else if(abs(dp[1]-a[i+1])<=k){
            A=a[i+1];
        }else if(abs(dp[0]-a[i+1])<=k){
            A=a[i+1];
        }else if(abs(dp[1]-b[i+1])<=k){
            A=b[i+1];
        }
        //cout<<A<<' '<<B<<endl;
        if(A==2e9+1&&B==2e9+1){
            cout<<"No"<<endl;
            break;
        }else{
            if(abs(dp[0]-a[i+1])<=k&&a[i+1]!=A){
                B=a[i+1];
            }
            if(abs(dp[0]-b[i+1])<=k&&b[i+1]!=A){
                B=b[i+1];
            }
            if(abs(dp[1]-a[i+1])<=k&&a[i+1]!=A){
                B=a[i+1];
            }
            if(abs(dp[1]-b[i+1])<=k&&b[i+1]!=A){
                B=b[i+1];
            }
            dp[0]=A;
            dp[1]=B;
            if(i==n-2){
                cout<<"Yes"<<endl;
                break;
            }
        }
    }

    return 0;
}