#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<bool> ok(10,false),ng(10,false);
    rep(i,10){
        if(s[i]=='o')ok[i]=true;
        if(s[i]=='x')ng[i]=true;
    }
    int ans=0;
    rep(i,1e4){
        bool flag=true;
        int a=i/1000,b=i/100-a*10,c=i/10-a*100-b*10,d=i-a*1000-b*100-c*10;
        vector<int> f(10,false);
        f[a]=true;
        f[b]=true;
        f[c]=true;
        f[d]=true;
        rep(j,10){
            if(ok[j]){
                if(!f[j])flag=false;
            }
            if(ng[j]){
                if(f[j])flag=false;
            }
        }
        if(flag)ans++;
    }
    cout<<ans<<endl;
    return 0;
}