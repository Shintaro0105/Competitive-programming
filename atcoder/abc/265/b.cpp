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
    int n,m;
    ll t;
    cin>>n>>m>>t;
    ll a[n-1];
    rep(i,n-1)cin>>a[i];
    ll x[n];
    rep(i,n){
        x[i]=0;
    }
    rep(i,m){
        ll X,Y;
        cin>>X>>Y;
        X--;
        x[X]=Y;
    }
    bool flag=true;
    rep(i,n-1){
        if(t<=a[i])flag=false;
        t-=a[i];
        t+=x[i+1];
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}