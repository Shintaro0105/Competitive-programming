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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

//部分和を求めるアルゴリズム
int main(){
    int n;cin>>n;
    bitset<100001> dp;
    dp[0]=1;
    int total=0;
    rep(i,n){
        int t;
        cin>>t;
        total+=t;
        //bitsetを用いるtで左シフト
        dp|=dp<<t;
    }
    int ans=total;
    //i番目の総和が作れる
    rep(i,total+1)if(dp[i])ans=min(ans,max(i,total-i));
    cout<<ans<<endl;
}