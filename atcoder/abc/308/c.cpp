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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<long double> a(n),b(n);
    vector<pair<long double,int>> p(n);
    rep(i,n){
        cin>>a[i]>>b[i];
        p[i]=make_pair(-a[i]/(a[i]+b[i]),i+1);
    }
    sort(ALL(p));
    rep(i,n-1)cout<<p[i].second<<' ';
    cout<<p[n-1].second<<endl;
    return 0;
}