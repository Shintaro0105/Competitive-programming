#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;cin>>n;
    vector<int> x(n),y(n);
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n){
        int ans=-1,dis=-1;
        rep(j,n){
            if(dis<(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])){
                dis=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                ans=j;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}