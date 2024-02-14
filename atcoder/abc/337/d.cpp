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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int h,w,k;cin>>h>>w>>k;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    string t="ox.";
    vector c(h+1,vector<vector<int>>(w,vector<int>(3,0)));
    vector r(h,vector<vector<int>>(w+1,vector<int>(3,0)));
    rep(i,h){
        rep(j,w){
            rep(l,3){
                if(s[i][j]==t[l]){
                    c[i+1][j][l]+=c[i][j][l]+1;
                }else{
                    c[i+1][j][l]+=c[i][j][l];
                }
            }
        }
    }
    rep(i,h){
        rep(j,w){
            rep(l,3){
                if(s[i][j]==t[l]){
                    r[i][j+1][l]+=r[i][j][l]+1;
                }else{
                    r[i][j+1][l]+=r[i][j][l];
                }
            }
        }
    }
    int ans=inf;
    rep(i,h-k+1){
        rep(j,w){
            vector<int> v(3);
            rep(l,3){
                v[l]=c[i+k][j][l]-c[i][j][l];
            }
            //cout<<v[0]<<' '<<v[1]<<' '<<v[2]<<endl;
            if(v[1]==0){
                ans=min(ans,v[2]);
                //cout<<ans<<endl;
            }
        }
    }
    rep(i,h){
        rep(j,w-k+1){
            vector<int> v(3);
            rep(l,3){
                v[l]=r[i][j+k][l]-r[i][j][l];
            }
            //cout<<v[0]<<' '<<v[1]<<' '<<v[2]<<endl;
            if(v[1]==0){
                ans=min(ans,v[2]);
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