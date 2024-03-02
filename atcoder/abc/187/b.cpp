#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> x(n),y(n);
    rep(i,n)cin>>x[i]>>y[i];
    int ans=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            if(abs(y[i]-y[j])<=abs(x[i]-x[j])){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}