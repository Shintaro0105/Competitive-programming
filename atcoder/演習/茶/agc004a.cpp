#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a%2==0||b%2==0||c%2==0){
        cout<<0<<endl;
    }else{
        cout<<min(a*b,min(b*c,c*a))<<endl;
    }
    return 0;
}