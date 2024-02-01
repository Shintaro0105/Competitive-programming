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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,q;cin>>n>>q;
    string s;cin>>s;
    vector<int> a(n,0);
    rep(i,n-1){
        if(s[i]==s[i+1])a[i+1]++;
        a[i+1]+=a[i];
    }
    rep(qi,q){
        int l,r;cin>>l>>r;
        l--;r--;
        cout<<a[r]-a[l]<<endl;
    }
    return 0;
}