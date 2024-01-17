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
    int p,q,r;cin>>p>>q>>r;
    cout << min({p+min(q,r),q+min(r,p),r+min(p,q)}) << endl;
}