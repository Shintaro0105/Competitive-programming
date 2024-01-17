#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    int a[n],s=0;
    rep(i,n){
        cin>>a[i];
        s^=a[i];
    }
    rep(i,n-1)cout<<(s^a[i])<<' ';
    cout<<(s^a[n-1])<<endl;
    return 0;
}