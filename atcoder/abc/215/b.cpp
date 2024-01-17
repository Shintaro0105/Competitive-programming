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
    ll n;
    scanf("%lld", &n);
    int cnt=0;
    while(n>=1){
        n/=2;
        if(n>=1)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}