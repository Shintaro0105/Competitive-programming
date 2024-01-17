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

ll divCeil(ll a,ll b){return (a+b-1)/b;}
bool f2(ll x,ll y,ll a,ll b){
    ll w=divCeil(a,y)+divCeil(b,y);
    return w<=x;
}
bool f3(ll x,ll y,ll a,ll b,ll c){
    ll w=divCeil(a,y);
    if(w>=x){
        return false;
    }else{
        x-=w;
        return f2(x,y,b,c)||f2(y,x,b,c);
    }
}

int main(){
    ll x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    rep(fi,2){
        rep(ri,3){
            if(f3(x,y,a,b,c)){
                cout<<"Yes"<<endl;
                return 0;
            }
            swap(a,b);swap(b,c);
        }
        swap(x,y);
    }
    cout<<"No"<<endl;
    return 0;
}