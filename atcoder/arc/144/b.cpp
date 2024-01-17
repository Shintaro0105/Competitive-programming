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
    int n;
    cin>>n;
    ll a,b;
    cin>>a>>b;
    ll A[n];
    rep(i,n)cin>>A[i];
    //sort(a,a+n);
    ll l=-1,r=1e9+1;
    while(r-l>1){
        ll mid=l+(r-l)/2;
        ll cnta=0,cntb=0;
        rep(i,n){
            if(A[i]<=mid){
                cnta+=(mid-A[i])/a;
                if((mid-A[i])%a!=0)cnta++;
            }else{
                cntb+=(A[i]-mid)/b;
            }
        }
        if(cnta>cntb){
            r=mid;
        }else{
            l=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}