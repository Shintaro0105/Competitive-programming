#include <iostream>
#include <vector>
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


int main(){
    string s;cin>>s;
    int q;cin>>q;
    rep(qi,q){
        ll t,k;
        cin>>t>>k;
        k--;
        int si=0;
        if(t<=60){
            ll b=1ll<<t;
            si=k/b;
            k%=b;
        }
        ll r=__builtin_popcountll(k);
        ll l=t-r;
        ll x=l+r*2+(s[si]-'A');
        char ans='A'+(x%3);
        cout<<ans<<endl;
    }
    return 0;
}