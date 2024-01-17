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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin >> n;
    
    ll ans=0;
    rep(i,n){
        int a;
        cin >> a;
        if(a>10){
            ans+=a-10;
        }
    }
    cout << ans << endl;
}