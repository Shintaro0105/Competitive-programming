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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=1L<<30;
    rep(i,1L<<(n-1)){
        int b=a[0];
        int c=0;
        rep(j,n-1){
            if((i>>j)&1){
                c^=b;
                b=a[j+1];
            }else{
                b|=a[j+1];
            }
        }
        c^=b;
        ans=min(c,ans);
    }
    cout<<ans<<endl;
    return 0;
}