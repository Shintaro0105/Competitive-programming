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
#include <bitset>
#include <deque>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int MOD = 1e9+7;

int main(){
    
    int n;cin>>n;
    int c[n];
    rep(i,n){
        cin>>c[i];
    }
    sort(c,c+n);
    ll ans=1;
    rep(i,n){
        c[i] -=i ;
        ans*=c[i];
        ans %= MOD;
        
    }
    
    if(ans>=0){
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
}