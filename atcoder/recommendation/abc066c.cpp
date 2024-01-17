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
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    if(n%2==0){
        for(int i=n-1;0<=i;i-=2){
            cout<<a[i]<<' ';
        }
        for(int i=0;i<n-2;i+=2){
            cout<<a[i]<<' ';
        }
        if(n>=2)cout<<a[n-2]<<endl;
    }else{
        if(n==1){
            cout<<a[0]<<endl;
            return 0;
        }
        for(int i=n-1;0<=i;i-=2){
            cout<<a[i]<<' ';
        }
        for(int i=1;i<n-2;i+=2){
            cout<<a[i]<<' ';
        }
        if(n>=2)cout<<a[n-2]<<endl;
    }
    return 0;
}