#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n),b(n),c(n);
    ll sum=0;
    rep(i,n){
        cin>>a[i]>>b[i];
        c[i]=b[i]-a[i];
        sum+=a[i];
    }
    sort(ALL(c));
    sum+=c[n-1];
    cout<<sum<<endl;
    return 0;
}