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
    int a[n];
    int c=0,lx=0,ln=0,ma=0,mi=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]==0)c--;
        else c++;
        ma=max(ma,c-ln);
        mi=min(mi,c-lx);
        lx=max(lx,c);
        ln=min(ln,c);
    }
    cout<<ma-mi+1<<endl;
    return 0;
}