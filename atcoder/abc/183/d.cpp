#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    ll w;cin>>w;
    vector<ll> sum(2e5+1,0);
    rep(i,n){
        int s,t;cin>>s>>t;
        ll p;cin>>p;
        sum[s]+=p;
        sum[t]-=p;
    }
    rep(i,2e5)sum[i+1]+=sum[i];
    bool flag=true;
    rep(i,2e5+1){
        if(sum[i]>w)flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}