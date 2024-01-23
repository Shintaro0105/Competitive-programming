#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    bool flag=true;
    rep(i,n-1)if(a[i]!=a[i+1])flag=false;
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}