#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll x,k,d;cin>>x>>k>>d;
    x=abs(x);
    if(k<=abs(x/d)){
        cout<<abs(x-d*k)<<endl;
    }else{
        if((ll)abs(x/d)%2==k%2){
            cout<<abs(x-d*(ll)abs(x/d))<<endl;
        }else{
            cout<<min(abs(x-d*(ll)abs((x+d)/d)),abs(x-d*(ll)(x-d)/d))<<endl;
        }
    }
    return 0;
}