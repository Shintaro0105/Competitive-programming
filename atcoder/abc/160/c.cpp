#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int k,n;cin>>k>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=a[0]+k-a[n-1];
    rep(i,n-1){
        ans=max(ans,a[i+1]-a[i]);
    }
    cout<<k-ans<<endl;
    return 0;
}