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
    ll n;cin>>n;
    ll ans=1;
    for(ll i=1;i*i*i<=n;i++){
        vector<int> a;
        ll k=i*i*i;
        while(k){
            a.push_back(k%10);
            k/=10;
        }
        bool flag=true;
        rep(j,a.size()/2){
            if(a[j]!=a[a.size()-1-j]){
                flag=false;
                break;
            }
        }
        if(flag)ans=max(ans,i*i*i);
    }
    cout<<ans<<endl;
    return 0;
}