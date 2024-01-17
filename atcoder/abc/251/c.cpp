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
    vector<pair<string,int>> p(n);
    int t[n];
    rep(i,n){
        cin>>p[i].first;
        cin>>t[i];
        p[i].second=i;
    }
    sort(p.begin(),p.end());
    vector<int> l;
    l.push_back(p[0].second);
    rep(i,n-1){
        if(p[i].first!=p[i+1].first){
            l.push_back(p[i+1].second);
        }
    }
    sort(l.begin(),l.end());
    int max=l[0];
    for(int i:l){
        if(t[max]<t[i]){
            max=i;
        }
    }
    cout<<max+1<<endl;
    return 0;
}