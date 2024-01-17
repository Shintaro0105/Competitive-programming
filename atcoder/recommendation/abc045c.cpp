#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    string s;
    cin>>s;
    int k=s.size();
    vector<ll> a(k);
    rep(i,k){
        a[i]=(int)(s[i]-'0');
        //cout<<a[i]<<endl;
    }
    ll ans=0;
    rep(i,1L<<(k-1)){
        ll n=a[0];
        rep(j,k-1){
            if(((i>>j)&1)==0){
                n*=10;
                n+=a[j+1];
            }else{
                ans+=n;
                //cout<<n<<endl;
                n=a[j+1];
            }
        }
        ans+=n;
    }
    cout<<ans<<endl;
    return 0;
}