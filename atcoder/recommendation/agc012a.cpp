#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(3*n);
    rep(i,3*n)cin>>a[i];
    sort(a.begin(),a.end());
    long long ans=0;
    rep(i,n){
        ans+=(long long)a[n+2*i];
    }
    printf("%lld\n",ans);
    return 0;
}