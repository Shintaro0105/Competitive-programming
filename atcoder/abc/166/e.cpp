#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using ll = long long int;
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,n){
        cin>>a[i];
    }
    ll ans=0;
    rep(i,n){
        ans+=mp[i-a[i]];
        mp[i+a[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}