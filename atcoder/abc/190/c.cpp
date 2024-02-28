#include <iostream>
#include <cmath>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    ll ans=0;
    for(int i=1;i<=(sqrt(8*n+1)-1)/2;i++){
        if(2*n%i==0){
            if((2*n/i-i+1)%2==0){
                if((2*n/i-i+1)/2>=1){
                    ans+=2;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}