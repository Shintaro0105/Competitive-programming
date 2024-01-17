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
    int n,m;cin>>n>>m;
    vector<int> c(n+1,2);
    vector t(m,queue<int>);
    bool flag=false;
    rep(i,m){
        int k;cin>>k;
        rep(ki,k){
            int a;cin>>a;
            t[i].push(a);
        }
    }
    rep(i,m){
        c[t[i].top()]--;
        if(c[t[i].top()]==0){

        }
        t[i].pop();
    }
    return 0;
}