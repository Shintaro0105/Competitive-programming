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
    ll p,q,r;
    cin>>p>>q>>r;
    vector<ll> a(n+1);
    a[0]=0;
    rep(i,n){
        cin>>a[i+1];
        a[i+1]+=a[i];
    }
    bool flag=false;
    for(int x=0;x<n;x++){
        int y=lower_bound(a.begin(),a.end(),a[x]+p)-a.begin();
        if(y<n-1){
            if(a[y]==a[x]+p){
                int z=lower_bound(a.begin(),a.end(),a[y]+q)-a.begin();
                if(z<n){
                    if(a[z]==a[y]+q){
                        int w=lower_bound(a.begin(),a.end(),a[z]+r)-a.begin();
                        if(w<=n){
                            if(a[w]==a[z]+r)flag=true;
                        }
                    }
                }
            }
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}