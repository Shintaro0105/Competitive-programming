#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll n,k;
    cin>>n>>k;
    cout<<min(abs(n-(ll)(n/k)*k),k-(abs(n-(ll)(n/k)*k)))<<endl;
    return 0;
}