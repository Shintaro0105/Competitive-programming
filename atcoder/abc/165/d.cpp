#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll a,b,n;cin>>a>>b>>n;
    if(n<b){
        cout<<(a*n)/b-a*(ll)(n/b)<<endl;
    }else{
        cout<<max((a*n)/b-a*(ll)(n/b),(a*(b-1))/b-a*(ll)((b-1)/b))<<endl;
    }
    return 0;
}