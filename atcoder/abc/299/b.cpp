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
    int n,t;
    cin>>n>>t;
    vector<int> c(n),r(n);
    rep(i,n)cin>>c[i];
    rep(i,n)cin>>r[i];
    P ans={r[0],1},anst={-1,-1};
    rep(i,n){
        if(c[i]==t&&anst.first<r[i]){
            anst={r[i],i+1};
        }
        if(c[i]==c[0]&&ans.first<r[i]){
            ans={r[i],i+1};
        }
    }
    if(anst.first==-1){
        cout<<ans.second<<endl;
    }else{
        cout<<anst.second<<endl;
    }
    return 0;
}