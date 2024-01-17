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
    int cnt=0;
    int N=n;
    while(N){
        N/=10;
        cnt++;
    }
    if(n==0)cnt++;
    rep(i,4-cnt){
        cout<<0;
    }
    cout<<n<<endl;
    return 0;
}