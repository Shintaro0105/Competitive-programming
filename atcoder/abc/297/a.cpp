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
    int n,d;
    cin>>n>>d;
    vector<int> t(n);
    rep(i,n)cin>>t[i];
    int ans=-1;
    rep(i,n-1){
        if(t[i+1]-t[i]<=d){
            ans=t[i+1];
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}