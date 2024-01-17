#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const ll inf=2e18+1;

int main(){
    int n,x;cin>>n>>x;
    ll a[n],b[n];
    ll s[n+1];
    s[0]=0;
    ll mb[n+1];
    mb[0]=inf;
    rep(i,n){
        cin>>a[i]>>b[i];
        s[i+1]=s[i]+a[i]+b[i];
        mb[i+1]=min(mb[i],b[i]);
    }
    ll ans=inf;
    rep(i,n){
        ll sum=0;
        if(x>=i+1){
            sum+=s[i+1];
            //cout<<s[i]<<endl;
            sum+=(x-i-1)*mb[i+1];
            ans=min(ans,sum);
        }
        //cout<<sum<<endl;
    }
    cout<<ans<<endl;
    return 0;
}