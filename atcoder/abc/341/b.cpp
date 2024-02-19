#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    vector<ll> s(n-1),t(n-1);
    rep(i,n)cin>>a[i];
    rep(i,n-1)cin>>s[i]>>t[i];
    rep(i,n-1){
        a[i+1]+=(ll)(a[i]/s[i])*t[i];
    }
    cout<<a[n-1]<<endl;
    return 0;
}