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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    ll ans=0;
    vector<int> r(n,0),c(n,0);
    rep(i,n){
        rep(j,n){
            if(s[i][j]=='o'){
                r[i]++;
                c[j]++;
            }
        }
    }
    rep(i,n){
        if(r[i]>=2){
            ll a=0;
            rep(j,n){
                if(s[i][j]=='o'&&c[j]>=2){
                    a+=(r[i]-1)*(c[j]-1);
                }
            }
            ans+=a;
        }   
    }
    cout<<ans<<endl;
    return 0;
}