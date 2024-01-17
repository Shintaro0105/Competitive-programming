#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    int ans=0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            vector<bool> f(m,false);
            rep(k,m){
                if(s[i][k]=='o'||s[j][k]=='o')f[k]=true;
            }
            bool flag=true;
            rep(k,m){
                if(!f[k])flag=false;
            }
            if(flag)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}