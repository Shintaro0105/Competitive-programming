#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll a,b,c,d;cin>>a>>b>>c>>d;
    cout<<max(max(a*c,a*d),max(b*c,b*d))<<endl;
    return 0;
}