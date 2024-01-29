#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll b;cin>>b;
    for(ll i=1;i<=15;i++){
        ll a=1;
        for(int j=0;j<i;j++){
            a*=i;
        }
        if(b==a){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}