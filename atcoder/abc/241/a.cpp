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
    int a[10];
    rep(i,10) cin>>a[i];
    int ans, c=0;
    rep(i,3){
        ans=a[c];
        c=ans;
    }
    cout<<ans<<endl;
    return 0;
}