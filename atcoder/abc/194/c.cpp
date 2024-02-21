#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    vector<ll> b(401,0);
    rep(i,n){
        cin>>a[i];
        b[a[i]+200]++;
    }
    ll sum=0;
    rep(i,400){
        for(int j=i+1;j<=400;j++){
            sum+=b[i]*b[j]*(j-i)*(j-i);
        }
    }
    cout<<sum<<endl;
    return 0;
}