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


int main(){
    int n;cin>>n;
    int a[n];
    ll A=0;
    rep(i,n){
        cin>>a[i];
        A+=a[i];
    }
    ll x;cin>>x;
    ll ans;
    ll X=x-A*(x/A);
    ll cnt=0;
    int i=0;
    while(1){
        if(X-a[i]>=0){
            cnt++;
            X-=a[i];
            if(i==n-1){
                i=0;
            }else{
                i++;
            }
        }else{
            cnt++;
            break;
        }
    }
    //cout<<x/A<<endl;
    ans=n*(x/A)+cnt;
    cout<<ans<<endl;
    return 0;
}