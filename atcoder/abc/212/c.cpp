#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

double f(double x, double y){
    return 4*x-2*x*y/(x*x+1);
}

int main(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int ans=1000000000;
    rep(i,n){
        int j;
        j=lower_bound(b,b+m,a[i])-b;
        //cout<<j<<endl;
        if(j==0){
            ans=min(ans,abs(a[i]-b[j]));
        }else if(j==m){
            ans=min(ans,abs(a[i]-b[j-1]));
        }else{
            ans=min(ans,abs(a[i]-b[j-1]));
            ans=min(ans,abs(a[i]-b[j]));
        }
    }
    cout<<ans<<endl;
}