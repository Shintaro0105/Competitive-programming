#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;
    cin>>n;
    rep(i,n){
        ll a,b;
        cin>>a>>b;
        cout<<a+b<<'\n';
    }
    return 0;
}