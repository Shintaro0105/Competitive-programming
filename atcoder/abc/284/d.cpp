#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int t;cin>>t;
    vector<ll> p;
    p.push_back(2);
    vector<bool> e(3*1e6,true);
    e[0]=false;
    e[1]=false;
    for(int i=2;i<3*1e6;i++){
        if(e[i]){
            for(int j=2*i;j<3*1e6;j+=i){
                e[j]=false;
            }
            p.push_back((ll)i);
        }
    }
    rep(ti,t){
        ll n;
        cin>>n;
        ll a,b;
        for(ll q:p){
            if(n%(q*q)==0){
                a=q;
                b=n/(q*q);
                break;
            }else if(n%q==0){
                b=q;
                a=sqrt(n/q);
                break;
            }
        }
        printf("%lld %lld\n",a,b);
    }
    return 0;
}