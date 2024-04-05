#include <iostream>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int k;cin>>k;
    set<ll> s,t;
    rep(i,9){
        t.insert(i+1);
    }
    while(s.size()<=k){
        set<ll> u;
        for(ll i:t){
            ll j=i%10;
            s.insert(i);
            s.insert(i*10+j);
            u.insert(i*10+j);
            if(j-1>=0){
                s.insert(i*10+j-1);
                u.insert(i*10+j-1);
            }
            if(j+1<10){
                s.insert(i*10+j+1);
                u.insert(i*10+j+1);
            }
        }
        swap(t,u);
    }
    int cnt=0;
    for(auto i:s){
        cnt++;
        if(cnt==k){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}