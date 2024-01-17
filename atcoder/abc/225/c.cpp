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
    int b[n][m];
    rep(i,n)rep(j,m){
        cin>>b[i][j];
    }
    bool flag=true;
    int l=b[0][0]%7;
    int k=b[0][0]/7;
    rep(i,n)rep(j,m){
        if(b[i][j]!=(k+i)*7+l+j)flag=false;
        if(b[i][j]%7==0&&j<m-1)flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}