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
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    rep(i,h){
        rep(j,w-1){
            if(s[i][j]=='T'&&s[i][j+1]=='T'){
                s[i][j]='P';
                s[i][j+1]='C';
                j++;
            }
        }
    }
    rep(i,h)cout<<s[i]<<'\n';
    return 0;
}