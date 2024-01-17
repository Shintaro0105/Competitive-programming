#include <iostream>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll a,b;cin>>a>>b;
    cout<<(int)(pow(a,b)+pow(b,a))<<endl;
    return 0;
}