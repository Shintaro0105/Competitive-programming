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
    ll a,b,c;
    cin >> a >> b >> c;
    int cnt=0;
    vector<ll> v(60,0),vv,vvv;
    rep(i,60){
        if(c>>i&1){
            cnt++;
            v[i]=1;
            vv.push_back(i);
        }else{
            vvv.push_back(i);
        }
    }
    if(cnt<=a+b&&a+b<=120-cnt&&(a+b)%2==cnt%2){
        int k=a+b-cnt;
        k/=2;
        if(a>=k&&b>=k){
            ll x=0,y=0;
            rep(i,cnt){
                if(i<a-k){
                    x+=1LL<<vv[i];
                }else{
                    y+=1LL<<vv[i];
                }
            }
            rep(i,k){
                x+=1LL<<vvv[i];
                y+=1LL<<vvv[i];
            }
            cout<<x<<' '<<y<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}