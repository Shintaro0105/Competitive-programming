#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int t;cin>>t;
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int m;cin>>m;
    vector<int> b(m);
    rep(i,m)cin>>b[i];
    if(m>n){
        cout<<"no"<<endl;
    }else{
        vector<bool> f(m,false);
        int j=0;
        rep(i,n){
            if(a[i]<=b[j]&&b[j]<=a[i]+t){
                f[j]=true;
                j++;
                if(j==m)break;
            }
        }
        bool flag=true;
        rep(i,m)if(!f[i])flag=false;
        if(flag)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}