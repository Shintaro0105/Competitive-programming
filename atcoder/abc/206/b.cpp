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


int main(){
    int n;cin>>n;
    ll ans,sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(sum >= n){
            ans=i;
            break;
        }
    }
   cout << ans << endl;
}