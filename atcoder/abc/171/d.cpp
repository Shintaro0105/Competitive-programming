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
    ll sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
        mp[a[i]]++;
    }
    int q;cin>>q;
    while(q){
        ll b,c;
        cin>>b>>c;
        sum-=mp[b]*(b-c);
        mp[c]+=mp[b];
        mp[b]=0;
        cout<<sum<<endl;
        q--;
    }
    return 0;
}