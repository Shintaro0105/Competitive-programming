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
    int p[n-1];
    rep(i,n-1)cin>>p[i];
    int cnt=0;
    int i=n-2;
    while(1){
        if(p[i]==1){
            break;
        }else{
            i=p[i]-2;
            cnt++;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
}