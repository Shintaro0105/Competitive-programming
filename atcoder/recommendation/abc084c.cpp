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
    vector<int> c(n-1),s(n-1),f(n-1);
    rep(i,n-1){
        cin>>c[i]>>s[i]>>f[i];
    }
    vector<int> ans(n);
    ans[n-1]=0;
    rep(i,n-1){
        int t=s[i];
        t+=c[i];
        for(int j=i+1;j<n-1;j++){
            if(t<s[j]){
                t=s[j];
                t+=c[j];
            }else{
                if(t%f[j]==0){
                    t+=c[j];
                }else{
                    t+=f[j]-(t-s[j])%f[j];
                    t+=c[j];
                }
            }
        }
        cout<<t<<'\n';
    }
    cout<<0<<'\n';
    return 0;
}