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
    int n;cin >> n;
    int a[n];
    rep(i,n)cin>>a[i];
    UnionFind tree(N);
    rep(i,n){
        tree.unite(a[i],a[n-1-i]);
    }

}