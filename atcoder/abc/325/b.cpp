#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> w(n),x(n);
    rep(i,n)cin>>w[i]>>x[i];
    vector ok(n,vector<bool>(24,false));
    rep(i,n){
        rep(j,9)ok[i][(9+j+x[i])%24]=true;
    }
    int ans=0;
    rep(j,24){
        int sum=0;
        rep(i,n){
            if(ok[i][j])sum+=w[i];
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}