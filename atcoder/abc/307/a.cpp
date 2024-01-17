#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(7*n),b(n,0);
    rep(i,7*n){
        cin>>a[i];
        b[i/7]+=a[i];
    }
    rep(i,n-1)cout<<b[i]<<' ';
    cout<<b[n-1]<<endl;
    return 0;
}