#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n+1),b(n+1);
    a[0]=0;
    rep(i,n)cin>>a[i+1];
    rep(i,n+1){
        vector<ll> s(i+2,0);
        s[0]=0;
        s[i+1]=0;
        rep(j,i+2){
            if(0<j&&j<i+1){
                s[j]=a[min(j,i+1-j)];
            }
        }
        ll sum=0;
        rep(j,i+2)sum+=s[j];
        b[i]=sum;
    }
    vector<ll> dp(n,0);
    rep(i,n){
        rep(j,n){
            if(i+j+1<n-1){
                dp[i+j+1]=max(dp[i+j+1],dp[i]+b[j]);
            }else if(i+j==n-1){
                dp[n-1]=max(dp[n-1],dp[i]+b[j]);
            }
        }
    }
    cout<<dp[n-1]<<endl;
    return 0;
}