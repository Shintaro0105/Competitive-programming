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
    int n,m,x;cin>>n>>m>>x;
    vector<int> c(n);
    vector a(n,vector<int>(m));
    rep(i,n){
        cin>>c[i];
        rep(j,m)cin>>a[i][j];
    }
    int ans=inf;
    rep(i,1<<n){
        vector<int> sum(m,0);
        int cnt=0;
        rep(j,n){
            if(i>>j&1){
                rep(k,m)sum[k]+=a[j][k];
                cnt+=c[j];
            }
        }
        bool flag=true;
        rep(k,m){
            if(sum[k]<x)flag=false;
        }
        if(flag)ans=min(ans,cnt);
    }
    if(ans==inf)cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}