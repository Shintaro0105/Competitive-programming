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
    int n,m;cin>>n>>m;
    ll k;cin>>k;
    vector<ll> a(n),b(m);
    queue<ll> sa,sb;
    stack<ll> saq,sbq;
    rep(i,n){
        cin>>a[i];
        sa.push(a[i]);
    }
    rep(i,m){
        cin>>b[i];
        sb.push(b[i]);
    }
    unsigned long ans=0;
    ll sum=0;
    while(sa.size()){
        ll an=sa.front();
        if(sum+an<=k){
            sum+=an;
            saq.push(an);
            sa.pop();
            //cout<<an<<endl;
        }else break;
    }
    if(sum<=k){
        while(sb.size()){
            ll bn=sb.front();
            if(sum+bn<=k){
                sum+=bn;
                sbq.push(bn);
                sb.pop();
                //cout<<sum<<endl;
            }else break;
        }
    }
    ans=saq.size()+sbq.size();
    //cout<<saq.size()<<" "<<sbq.size()<<endl;
    while(saq.size()!=0&&sb.size()!=0){
        if(saq.size()!=0){
            sum-=saq.top();
            saq.pop();
        }
        while(sb.size()!=0){
            if(sum+sb.front()<=k){
                sum+=sb.front();
                sbq.push(sb.front());
                sb.pop();
            }else break;
        }
        ans=max(ans,saq.size()+sbq.size());
    }
    cout<<ans<<endl;
    return 0;
}