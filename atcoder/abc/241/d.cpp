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
    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n){
        int r;cin>>r;
        if(r==1){
            int x;cin>>x;
            a.push_back(x);
            sort(a.begin(),a.end());
        }else if(r==2){
            ll x;
            int k;
            cin>>x>>k;
            auto y = find(a.begin(), a.end(), x);
        }
    }
    return 0;
}