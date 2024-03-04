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
    int n,m;cin>>n>>m;
    vector<int> a(m);
    rep(i,m)cin>>a[i];
    int s=0;
    vector<int> b(m+1);
    sort(ALL(a));
    rep(i,m){
        b[i]=max(a[i]-s-1,0);
        s=a[i];
    }
    b[m]=max(n-s,0);
    int k=1e9+1;
    rep(i,m+1){
        if(b[i]!=0)k=min(k,b[i]);
    }
    int ans=0;
    rep(i,m+1){
        if(b[i]!=0){
            ans+=b[i]/k;
            if(b[i]%k!=0)ans++;
        }
        //cout<<b[i]<<' ';
    }
    //cout<<endl;
    cout<<ans<<endl;
    return 0;
}