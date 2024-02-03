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
const ll inf=1e9+1;

int main(){
    ll sum=0,ans=0;
    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
        if(sum<0){
            ans=max(ans,-sum);
        }
    }
    rep(i,n){
        ans+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}