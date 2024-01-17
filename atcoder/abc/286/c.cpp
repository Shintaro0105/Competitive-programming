#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    ll a,b;cin>>a>>b;
    string s;cin>>s;
    ll ans=1e18;
    rep(i,n){
        string t;
        for(int j=i;j<n;j++){
            t+=s[j];
        }
        for(int j=0;j<i;j++){
            t+=s[j];
        }
        ll sum=i*a;
        rep(j,n/2){
            if(t[j]!=t[n-j-1])sum+=b;
        }
        ans=min(ans,sum);
        //cout<<t<<endl;
    }
    printf("%lld\n",ans);
    return 0;
}