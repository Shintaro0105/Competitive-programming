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
    int n,h,x;cin>>n>>h>>x;
    vector<int>  p(n);
    rep(i,n){
        cin>>p[i];
    }
    int  ans=-1;
    rep(i,n){
        if(h+p[i]>=x){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}