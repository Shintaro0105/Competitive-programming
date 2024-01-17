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
    int a[h][w];
    char s[h][w];
    rep(i,h)rep(j,w){
        cin>>a[i][j];
        if(a[i][j]==0){
            s[i][j]='.';
        }else{
            s[i][j]='A'+a[i][j]-1;
        }
    }
    rep(i,h){
        rep(j,w-1){
            cout<<s[i][j];
        }
        cout<<s[i][w-1]<<'\n';
    }
    return 0;
}