#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll k,a,b;cin>>k>>a>>b;
    if(a+2>=b){
        cout<<k+1<<endl;
    }else{
        ll ans=((k-a+1)/2)*(b-a)+a;
        if((k-a+1)%2==1)ans++;
        cout<<ans<<endl;
    }
    return 0;
}