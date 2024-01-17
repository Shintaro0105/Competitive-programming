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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,k;cin>>n>>k;
    vector<ll> a(n);
    rep(i,n){
        cin>>a[i];
    }
    set<ll> b;
    b.insert(0);
    k++;
    int i=0,v=-1;
    while(i<k){
        auto it=b.begin();
        if(*it!=v){
            i++;
            v=*it;
            for(int j:a){
                b.insert(*it+j);
            }
        }
    }
    return 0;
}