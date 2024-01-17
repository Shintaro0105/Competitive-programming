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
    vector<ll> l(n);
    rep(i,n)cin>>l[i];
    ll ng=-1,ok=1e18+1;
    while(ok-ng>1){
        ll mid=ng+(ok-ng)/2;
        ll cnt=1,sum=0;
        bool flag=true;
        rep(i,n){
            if(sum==0){
                if(l[i]<=mid){
                    sum+=l[i];
                }else{
                    flag=false;
                }
            }else{
                if(sum+1+l[i]<=mid){
                    sum+=l[i]+1;
                }else{
                    if(l[i]<=mid){
                        sum=l[i];
                        cnt++;
                    }else{
                        flag=false;
                    }
                }
            }
        }
        if(flag&&cnt<=m){
            ok=mid;
        }else{
            ng=mid;
        }
        //cout<<ng<<' '<<ok<<' '<<cnt<<endl;
    }
    cout<<ok<<endl;
    return 0;
}