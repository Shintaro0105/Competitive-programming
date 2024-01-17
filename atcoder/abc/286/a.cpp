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
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    p--;q--;r--;s--;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i];
    rep(i,n){
        if(p<=i&&i<=q){
            b[i]=a[r+i-p];
        }else if(r<=i&&i<=s){
            b[i]=a[p+i-r];
        }else{
            b[i]=a[i];
        }
    }
    rep(i,n-1)cout<<b[i]<<' ';
    cout<<b[n-1]<<endl;
    return 0;
}