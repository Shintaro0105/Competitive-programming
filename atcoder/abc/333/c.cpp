#include <iostream>
#include <set>
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    set<ll> s;
    for(ll i=1;i<1e13;i=i*10+1){
        for(ll j=i;j<1e13;j=j*10+1){
            for(ll k=j;k<1e13;k=k*10+1){
                s.insert(i+j+k);
            }
        }
    }
    auto itr=s.begin();
    for(int i=0;i<n-1;i++){
        itr++;
    }
    cout<<*itr<<endl;
    return 0;
}