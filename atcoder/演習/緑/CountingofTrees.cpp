#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const ll mod=998244353;

int main(){
    int n;cin>>n;
    vector<ll> d(n,0);
    bool flag=false;
    rep(i,n){
        int c;
        cin>>c;
        if(i==0&&c==0){
            flag=true;
        }
        d[c]++;
    }
    if(!flag){
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    if(d[0]!=1)ans=0;
    ll res=d[0];
    rep(i,n){
        rep(j,d[i+1]){
            ans*=d[i];
            ans%=mod;
        }
        res+=d[i+1];
        if(res==n)break;
    }
    ans%=mod;
    cout<<ans<<endl;
    return 0;
}