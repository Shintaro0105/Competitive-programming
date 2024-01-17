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



int main(){
    int n, x;
    cin>>n>>x;
    int dp[100][10001];
    rep(i,n){
        int a, b;cin>>a>>b;
        if(i==0){
            dp[i][a]=1;
            dp[i][b]=1;
        }else{
            for(int j=i;j<=10000;j++){
                if(dp[i-1][j]==1){
                    dp[i][j+a]=1;
                    dp[i][j+b]=1;
                }
            }
        }
    }
    if(dp[n-1][x]==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}