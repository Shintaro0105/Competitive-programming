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
const int inf=1e9+1;
const int MAX=2e5;

int main(){
    int n;cin>>n;
    vector<int> c(MAX+1);
    rep(i,n){
        int a;cin>>a;
        c[a]+=1;
    }
    ll ans=0;
    rep(i,MAX){
        for(int j=1;j*(i+1)<=MAX;j++){
            ans+=(long long)c[i+1]*c[j]*c[(i+1)*j];
        }
    }
    cout<<ans<<endl;
    return 0;
}