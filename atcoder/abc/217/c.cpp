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
using P = pair<int,int>;


int main(){
    int n;cin>>n;
    int p[n],q[n];
    rep(i,n)cin>>p[i];
    rep(i,n)q[p[i]-1]=i+1;
    rep(i,n) cout<<q[i]<<' ';
    return 0;
}