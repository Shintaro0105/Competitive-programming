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
    int p,f[11];
    cin>>p;
    f[0]=1;
    rep(i,10){
        f[i+1]=(i+1)*f[i];
    }
    int cnt=0;
    while(p){
        int i=10;
        while(p-f[i]<0){
            i--;
        }
        p-=f[i];
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}