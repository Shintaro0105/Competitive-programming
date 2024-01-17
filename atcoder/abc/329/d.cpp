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
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    rep(i,m){
        cin>>a[i];
        a[i]--;
    }
    set<int> st;
    vector<int> b(n,0);
    vector<set<int>> c(m+1);
    rep(i,m){
        b[a[i]]++;
        st.insert(b[a[i]]);
        c[b[a[i]]].insert(a[i]);
        auto itr=st.end();
        itr--;
        auto citr=c[*itr].begin();
        cout<<*citr+1<<endl;
    }
    return 0;
}