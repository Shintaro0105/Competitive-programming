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
const double pi = 3.141592653589793;

int main(){
    double x,y,d;
    cin>>x>>y>>d;
    double c=cos((d/180)*pi),s=sin((d/180)*pi);
    cout<<fixed << setprecision(15)<<x*c-y*s<<' '<<fixed << setprecision(15)<<x*s+y*c<<endl;
    return 0;
}