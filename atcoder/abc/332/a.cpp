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
    int n,s,k;cin>>n>>s>>k;
    int ans=0;
    rep(i,n){
        int p,q;cin>>p>>q;
        ans+=p*q;
    }
    if(ans<s){
        ans+=k;
    }
    cout<<ans<<endl;
    return 0;
}