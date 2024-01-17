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
    char s[10][10];
    bool a[10],c[10];
    rep(i,10){
        a[i]=false;
        c[i]=false;
    }
    rep(i,10)rep(j,10){
        cin>>s[i][j];
        if(s[i][j]=='#'){
            a[i]=true;
            c[j]=true;
        }
    }
    int m=-1,n=11;
    rep(i,10){
        if(a[i]){
            m=max(i,m);
            n=min(i,n);
        }
    }
    cout<<n+1<<' '<<m+1<<endl;
    m=-1,n=11;
    rep(i,10){
        if(c[i]){
            m=max(i,m);
            n=min(i,n);
        }
    }
    cout<<n+1<<' '<<m+1<<endl;
    return 0;
}