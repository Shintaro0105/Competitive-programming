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
    int n;cin>>n;
    ll k;cin>>k;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
        a[i]--;
    }
    vector<ll> cnt(n,-1);
    ll now=0,cntnow=0;
    while(1){
        if(cnt[now]!=-1){
            break;
        }
        cnt[now]=cntnow;
        cntnow++;
        now=a[now];
        //cout<<now<<' '<<cntnow<<endl;
    }
    if(k<=cnt[now]){
        int ans=0;
        rep(i,k){
            ans=a[ans];
        }
        cout<<ans+1<<endl;
    }else{
        k-=cnt[now];
        k%=cntnow-cnt[now];
        int ans=now;
        rep(i,k){
            ans=a[ans];
        }
        cout<<ans+1<<endl;
    }
    return 0;
}