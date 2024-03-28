#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll x;cin>>x;
    ll now=100,cnt=0;
    while(1){
        if(now>=x)break;
        now=now+now/100;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}