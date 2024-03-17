#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll k;cin>>k;
    int j=7;
    rep(i,k){
        if(j%k==0){
            cout<<i+1<<endl;
            return 0;
        }
        j*=10;
        j+=7;
        j%=k;
    }
    cout<<-1<<endl;
    return 0;
}