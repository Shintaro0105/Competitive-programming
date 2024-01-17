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
#define rep(i,n) for(int i = 0;i <= (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int m;cin>>m;
    vector<string> s(3);
    rep(i,2)cin>>s[i];
    vector v(6,vector<int>(3));
    v={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
    int ans=inf;
    rep(i,m+1){
        rep(j,m+1){
            rep(k,m+1){
                bool flag=false;
                for(auto l:v){
                    if(s[l[0]][i%m]==s[l[1]][(i+j)%m]&&s[l[1]][(i+j)%m]==s[l[2]][(i+j+k)%m]&&s[l[0]][i%m]==s[l[2]][(i+j+k)%m])flag=true;
                }
                if(flag&&i<i+j&&i+j<i+j+k){
                    ans=min(ans,i+j+k);
                    //cout<<i<<' '<<j<<' '<<k<<endl;
                }
            }
        }
    }
    if(ans==inf){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}