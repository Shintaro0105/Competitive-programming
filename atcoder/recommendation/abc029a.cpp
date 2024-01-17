#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> t(n);
    rep(i,n)cin>>t[i];
    int ans=200;
    rep(i,1<<n){
        int a=0,b=0;
        rep(j,n){
            if((i>>j)&1){
                a+=t[j];
            }else{
                b+=t[j];
            }
        }
        ans=min(ans,max(a,b));
    }
    cout<<ans<<endl;
    return 0;
}