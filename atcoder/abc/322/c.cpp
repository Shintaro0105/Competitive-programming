#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(m);
    vector<bool> f(n,false);
    rep(i,m){
        cin>>a[i];
        a[i]--;
        f[a[i]]=true;
    }
    vector<int> ans(n,0);
    for(int i=n-2;i>=0;i--){
        if(!f[i]){
            ans[i]=ans[i+1]+1;
        }
    }
    rep(i,n)cout<<ans[i]<<endl;
    return 0;
}