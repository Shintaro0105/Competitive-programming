#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=0;
    rep(l,n){
        int mi=a[l];
        for(int r=l;r<n;r++){
            mi=min(mi,a[r]);
            ans=max(ans,mi*(r-l+1));
        }
    }
    cout<<ans<<endl;
    return 0;
}