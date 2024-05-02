#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,q;cin>>n>>q;
    vector<int> t(q);
    vector<bool> ok(n,true);
    rep(i,q){
        cin>>t[i];
        t[i]--;
        if(ok[t[i]]){
            ok[t[i]]=false;
        }else{
            ok[t[i]]=true;
        }
    }
    int ans=0;
    rep(i,n){
        if(ok[i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}