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
    long double n,k,sum=0;cin>>n>>k;
    sum+=(k-1)*(n-k)*6;
    sum+=(k-1)*3;
    sum+=(n-k)*3;
    sum++;
    cout<<setprecision(15)<<sum/(n*n*n)<<endl;
    return 0;
}