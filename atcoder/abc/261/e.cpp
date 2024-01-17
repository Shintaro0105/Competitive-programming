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

int main(){
    int n;
    ll c;
    cin>>n>>c;
    ll m=(1LL<<30)-1;
    ll s0=0,s1=m,x=c;
    rep(i,n){
        int t;
        ll a;
        cin>>t>>a;
        if(t==1){
            s0&=a;s1&=a;
        }else if(t==2){
            s0|=a;s1|=a;
        }else{
            s0^=a;s1^=a;
        }
        x=(x&s1)|((x^m)&s0);
        cout<<x<<'\n';
    }
    return 0;
}