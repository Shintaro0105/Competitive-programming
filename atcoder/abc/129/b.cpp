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


int main(){
    int n,tot=0;cin>>n;
    int w[n];
    rep(i,n){
        cin>>w[i];
    }
    int ans=10000;
    rep(t,n){
        int sum1=0,sum2=0;
        rep(i,t)sum1+=w[i];
        for(int j=t;j<n;j++)sum2+=w[j];
        ans=min(ans,abs(sum1-sum2));
    }
    cout<<ans<<endl;
    
}