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
    int n;cin>>n;
    vector<ll> a(n);
    ll sum=0,d=1e9+1,cnt=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]<0)cnt++;
        ll c=abs(a[i]);
        sum+=c;
        d=min(d,c);
    }
    //cout<<sum<<endl;
    if(cnt%2==0){
        cout<<sum<<endl;
    }else{
        cout<<sum-2*d<<endl;
    }
    return 0;
}