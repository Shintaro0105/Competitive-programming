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
    vector<bool> flag(1001,false);
    for(int a=1;a<=200;a++)for(int b=1;b<=200;b++){
        int S=4*a*b+3*a+3*b;
        if(S<=1000)flag[S]=true;
    }
    int n;cin>>n;
    int cnt=0;
    rep(i,n){
        int s;cin>>s;
        if(!flag[s])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}