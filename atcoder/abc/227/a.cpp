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
    int n,k,a;
    cin>>n>>k>>a;
    int i=a;
    k--;
    while(k){
        if(i==n)i=1;
        else i++;
        k--;
        //cout<<i<<' '<<k<<endl;
    }
    cout<<i<<endl;
    return 0;
}