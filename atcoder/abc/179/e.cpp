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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    ll n,x,m;cin>>n>>x>>m;
    vector<bool> seen(m,false);
    ll cnt1=0,sum1=0,sum2=0,now=x;
    vector<vector<int>> g(m);
    while(1){
        if(seen[now])break;
        seen[now]=true;
        sum1+=now;
        cnt1++;
        g[now].push_back((now*now)%m);
        now=(now*now)%m;
    }
    ll cnt2=0;
    rep(i,m)seen[i]=false;
    while(1){
        if(seen[now])break;
        seen[now]=true;
        sum2+=now;
        for(int i:g[now]){
            now=i;
        }
        cnt2++;
    }
    if(n<=cnt1){
        ll ans=0;
        rep(i,n){
            ans+=x;
            x=(x*x)%m;
        }
        cout<<ans<<endl;
    }else{
        ll ans=sum1-sum2+(ll)((n-cnt1+cnt2)/cnt2)*sum2;
        rep(i,(n-cnt1+cnt2)%cnt2){
            ans+=now;
            now=(now*now)%m;
        }
        cout<<ans<<endl;
    }
    return 0;
}