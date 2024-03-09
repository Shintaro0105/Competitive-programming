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
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> f,b;
    rep(i,n){
        cin>>a[i];
    }
    b[0]=a[0];
    f[a[0]]=0;
    b[a[n-1]]=inf;
    rep(i,n-1){
        f[a[i+1]]=a[i];
        b[a[i]]=a[i+1];
    }
    int q;cin>>q;
    rep(i,q){
        int t;cin>>t;
        if(t==1){
            int x,y;cin>>x>>y;
            int r=b[x];
            b[x]=y;
            f[y]=x;
            b[y]=r;
            f[r]=y;
        }else{
            int x;cin>>x;
            int l=f[x],r=b[x];
            f[r]=l;
            b[l]=r;
            f.erase(x);
            b.erase(x);
        }
    }
    int i=b[0];
    while(i!=inf){
        cout<<i<<' ';
        i=b[i];
    }
    cout<<endl;
    return 0;
}