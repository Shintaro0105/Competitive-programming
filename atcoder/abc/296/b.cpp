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
    vector<string> s(8);
    rep(i,8)cin>>s[i];
    string ans;
    rep(i,8){
        rep(j,8){
            if(s[i][j]=='*'){
                ans+='a'+j;
                ans+='1'+7-i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}