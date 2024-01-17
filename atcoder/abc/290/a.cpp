#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    rep(i,n)cin>>a[i];
    int ans=0;
    rep(i,m){
        int b;
        cin>>b;
        b--;
        ans+=a[b];
    }
    cout<<ans<<endl;
    return 0;
}