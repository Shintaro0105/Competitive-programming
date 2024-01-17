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
    int h,w;cin>>h>>w;
    vector c(h,vector<char>(w));
    rep(i,h)rep(j,w)cin>>c[i][j];
    vector xh(h,vector<int>(26,0));
    vector xw(w,vector<int>(26,0));
    rep(i,h){
        rep(j,w){
            xh[i][(int)(c[i][j]-'a')]++;
            xw[j][(int)(c[i][j]-'a')]++;
        }
    }
    int yh=h,yw=w;
    vector<bool> sh(h,false),sw(w,false);
    rep(_,h+w){
        vector<P> zh,zw;
        rep(i,h){
            rep(j,26){
                if(sh[i])continue;
                if(xh[i][j]==yw&&yw>=2){
                    zh.push_back(make_pair(i,j));
                    sh[i]=true;
                }
            }
        }
        rep(i,w){
            rep(j,26){
                if(sw[i])continue;
                if(xw[i][j]==yh&&yh>=2){
                    zw.push_back(make_pair(i,j));
                    sw[i]=true;
                }
            }
        }
        for(auto [i,j]:zh){
            rep(k,w)xw[k][j]--;
            yh--;
        }
        for(auto [i,j]:zw){
            rep(k,h)xh[k][j]--;
            yw--;
        }
    }
    cout<<yh*yw<<endl;
    return 0;
}