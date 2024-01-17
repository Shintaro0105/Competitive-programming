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

int f(int x){
    int cnt=0;
    while(x){
        x/=10;
        cnt++;
    }
    return cnt;
}

ll F(string s){
    int l=s.size();
    ll res=0;
    rep(i,l){
        int x=s[i]-'0';
        res+=x*pow(10,l-1-i);
    }
    return res;
}

int main(){
    int n;cin>>n;
    int N=n;
    int l=f(n);
    vector<int> c(l);
    rep(i,l){
        c.push_back(N%10);
        N/=10;
    }
    sort(c.begin(),c.end(),greater<int>());
    ll ans=0;
    rep(i,1<<l){
        string a,b;
        rep(j,l){
            if((i>>j)&1){
                a+=c[j]+'0';
            }else{
                b+=c[j]+'0';
            }
        }
        ans=max(ans,F(a)*F(b));
    }
    cout<<ans<<endl;
    return 0;
}