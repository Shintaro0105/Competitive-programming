#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;cin>>h>>w;
    vector a(h,vector<int>(w));
    int mi=1e9;
    rep(i,h){
        rep(j,w){
            cin>>a[i][j];
            mi=min(a[i][j],mi);
        }
    }
    int ans=0;
    rep(i,h){
        rep(j,w){
            ans+=a[i][j]-mi;
        }
    }
    cout<<ans<<endl;
    return 0;
}