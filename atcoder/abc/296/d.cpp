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

bool enum_divisors(ll N,ll n) {
    bool flag=false;
    for (ll i = max(N/n,(ll)1); i * i <= N;i++) {
        if (N % i == 0) {
            if(i<=n&&N/i<=n){
                flag=true;
                break;
            }
        }
        if(i>n)break;
    }
    return flag;
}

int main(){
    ll n,m;
    cin>>n>>m;
    if(sqrt(m)>n){
        cout<<-1<<endl;
        return 0;
    }
    ll i=m;
    while(1){
        if(enum_divisors(i,n)){
            cout<<i<<endl;
            return 0;
        }
        i++;
        if(sqrt(i)>n){
            cout<<-1<<endl;
            return 0;
        }
    }
    return 0;
}