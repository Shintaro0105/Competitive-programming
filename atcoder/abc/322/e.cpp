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
    int n,k,p;cin>>n>>k>>p;
    vector<ll> c(n);
    vector a(n,vector<int>(k));
    rep(i,n){
        cin>>c[i];
        rep(j,k)cin>>a[i][j];
    }
    vector<int> ok(k,0);
    rep(i,n){
        rep(j,k)ok[j]+=a[i][j];
    }
    bool flag=true;
    rep(i,k){
        if(ok[i]<p)flag=false;
    }
    if(flag){
        
    }
    return 0;
}