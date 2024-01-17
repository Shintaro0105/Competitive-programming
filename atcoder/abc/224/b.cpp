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
    int h,w;cin>>h>>w;
    ll a[h][w];
    rep(i,h)rep(j,w)cin>>a[i][j];
    bool flag=true;
    rep(i1,h){
        rep(j1,w){
            for(int i2=i1+1;i2<h;i2++){
                for(int j2=j1+1;j2<w;j2++){
                    if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2])flag=false;
                }
            }
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}