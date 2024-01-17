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
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    ll x;cin>>x;
    if(x<0 && x%10!=0){
        printf("%lld\n", x/10 -1);
    }else{
        printf("%lld\n", x/10);
    }

    
}