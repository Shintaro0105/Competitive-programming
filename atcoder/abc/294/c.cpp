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
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    vector<P> c(n+m);
    rep(i,n+m){
        cin>>c[i].first;
        if(i<n){
            c[i].second=0;
        }else{
            c[i].second=1;
        }
    }
    sort(c.begin(),c.end());
    int j=0,k=0;
    rep(i,n+m){
        if(c[i].second==0){
            a[j]=i+1;
            j++;
        }else{
            b[k]=i+1;
            k++;
        }
    }
    rep(i,n-1)cout<<a[i]<<' ';
    cout<<a[n-1]<<endl;
    rep(i,m-1)cout<<b[i]<<' ';
    cout<<b[m-1]<<endl;
    return 0;
}