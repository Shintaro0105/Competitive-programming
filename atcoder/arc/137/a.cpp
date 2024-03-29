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

ll gcd(ll a, ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    ll l,r;cin>>l>>r;
    ll k=r-l;
    bool b=false;
    while(1){
        for(ll i=l;i+k<=r;i++){
            if(gcd(i,i+k)==1){
                b=true;
                break;
            }
        }
        if(b)break;
        k--;
    }
    cout<<k<<endl;
    return 0;
}