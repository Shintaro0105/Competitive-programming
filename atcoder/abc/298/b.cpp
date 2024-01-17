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
    int a[4][n][n],b[n][n];
    rep(i,n)rep(j,n){
        cin>>a[0][i][j];
    }
    rep(i,n)rep(j,n)cin>>b[i][j];
    rep(k,3){
        rep(i,n)rep(j,n){
            a[k+1][n-1-j][i]=a[k][i][j];
        }
    }
    bool flag=true;
    rep(k,4){
        flag=true;
        rep(i,n)rep(j,n){
            if(a[k][i][j]==1&&b[i][j]==0)flag=false;
        }
        if(flag)break;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}