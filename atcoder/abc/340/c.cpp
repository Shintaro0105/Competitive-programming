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

ll N;
map<ll,ll> mp;

ll dfs(ll n){
    if(mp.count(n)){
        return mp[n];
    }else{
        if(n%2==0){
            mp[n]=n+2*dfs(n/2);
            return n+2*mp[n/2];
        }else{
            mp[n]=n+dfs(n/2)+dfs((n+1)/2);
            return n+mp[n/2]+mp[(n+1)/2];
        }
    }
}

int main(){
    cin>>N;
    mp[1]=0;
    cout<<dfs(N)<<endl;
    return 0;
}