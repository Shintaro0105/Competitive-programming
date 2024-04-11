#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    map<ll,ll> mp;
    rep(i,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll sum=0;
    for(auto p:mp){
        sum+=p.second*(p.second-1)/2;
    }
    rep(i,n){
        cout<<sum-(mp[a[i]]-1)<<endl;
    }
    return 0;
}