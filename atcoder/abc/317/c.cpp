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
    int n,m;cin>>n>>m;
    vector d(n,vector<ll>(n,-inf));
    rep(i,m){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        d[a][b]=c;
        d[b][a]=c;
    }
    vector<int> v(n);
    rep(i,n)v[i]=i;
    ll ans=-1;
    do{
        ll dis=0;
        rep(i,n-1){
            dis+=d[v[i]][v[i+1]];
            ans=max(dis,ans);
        }
    }while(next_permutation(ALL(v)));
    cout<<ans<<endl;
    return 0;
}