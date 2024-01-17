#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int a[201];
    rep(i,201)a[i]=0;
    rep(i,n)cin>>a[i];
    rep(i,n-1){
        cout<<a[k+i]<<' ';
    }
    cout<<a[k+n-1]<<endl;
    return 0;
}