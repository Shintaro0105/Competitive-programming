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
    int h,w;
    cin>>h>>w;
    int r,c;
    cin>>r>>c;
    int x[4]={1,-1,0,0},y[4]={0,0,1,-1};
    int ans=0;
    rep(i,4){
        int ri=r+x[i],ci=c+y[i];
        if(1<=ri&&ri<=h&&1<=ci&&ci<=w)ans++;
    }
    cout<<ans<<endl;
    return 0;
}