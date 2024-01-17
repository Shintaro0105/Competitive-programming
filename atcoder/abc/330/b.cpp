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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,l,r;cin>>n>>l>>r;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    rep(i,n-1){
        if(a[i]<=l){
            cout<<l<<' ';
        }else if(l<=a[i]&&a[i]<=r){
            cout<<a[i]<<' ';
        }else{
            cout<<r<<' ';
        }
    }
    if(a[n-1]<=l){
        cout<<l<<endl;
    }else if(l<=a[n-1]&&a[n-1]<=r){
        cout<<a[n-1]<<endl;
    }else{
        cout<<r<<endl;
    }
    return 0;
}