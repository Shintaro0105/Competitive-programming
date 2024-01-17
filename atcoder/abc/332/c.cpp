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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    int nm=m,nr=0,ans=0;
    rep(i,n){
        if(s[i]=='0'){
            nm=m;
            ans=max(ans,nr);
            nr=0;
        }else if(s[i]=='1'){
            if(nm>0){
                nm--;
            }else{
                nr++;
            }
        }else{
            nr++;
        }
    }
    ans=max(ans,nr);
    cout<<ans<<endl;
    return 0;
}