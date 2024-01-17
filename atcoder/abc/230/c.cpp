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
    ll n,a,b,p,q,r,s;
    cin>>n>>a>>b>>p>>q>>r>>s;
    char ans[q-p+1][s-r+1];
    rep(i,q-p+1)rep(j,s-r+1){
        ll x=i+p,y=j+r;
        if(x+y==b+a||y-x==b-a){
            ans[i][j]='#';
        }else{
            ans[i][j]='.';
        }
    }
    rep(i,q-p+1){
        rep(j,s-r+1){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}