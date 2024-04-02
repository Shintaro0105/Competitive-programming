#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    string s;cin>>s;
    int n=s.size();
    vector<int> v(n+1,0);
    int m=1;
    rep(i,n){
        v[i+1]=(2019+v[i]+m*(int)(s[n-1-i]-'0'))%2019;
        m*=10;
        m%=2019;
    }
    map<int,ll> mp;
    ll ans=0;
    rep(i,n+1){
        mp[v[i]]++;
        //cout<<v[i]<<' ';
    }
    //cout<<endl;
    for(auto p:mp){
        ans+=p.second*(p.second-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}