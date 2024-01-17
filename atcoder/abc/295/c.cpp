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
    int n;cin>>n;
    vector<int> a(n);
    set<int> s;
    map<int,int> mp;
    rep(i,n){
        cin>>a[i];
        s.insert(a[i]);
        mp[a[i]]++;
    }
    int ans=0;
    for(int i:s){
        ans+=mp[i]/2;
    }
    cout<<ans<<endl;
    return 0;
}