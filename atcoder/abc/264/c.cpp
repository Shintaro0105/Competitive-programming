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
    int h1,w1;
    cin>>h1>>w1;
    int a[h1][w1];
    rep(i,h1)rep(j,w1)cin>>a[i][j];
    int h2,w2;
    cin>>h2>>w2;
    int b[h2][w2];
    rep(i,h2)rep(j,w2)cin>>b[i][j];
    bool ans=false;
    rep(i,pow(2,h1)){
        rep(j,pow(2,w1)){
            bool h[h1],w[w1];
            int cnh=0,cnw=0;
            rep(hi,h1){
                if(i>>hi&1){
                    h[hi]=true;
                    cnh++;
                }else h[hi]=false;
            }
            rep(wi,w1){
                if(j>>wi&1){
                    w[wi]=true;
                    cnw++;
                }else w[wi]=false;
            }
            if(cnh==h2&&cnw==w2){
                int c[h2][w2];
                int x=0;
                rep(k,h1){
                    if(h[k]){
                        int y=0;
                        rep(l,w1){
                            if(w[l]){
                                c[x][y]=a[k][l];
                                y++;
                            }
                        }
                        x++;
                    }
                }
                bool flag=true;
                rep(k,h2)rep(l,w2){
                    if(c[k][l]!=b[k][l])flag=false;
                }
                if(flag)ans=true;
            }
        }
    }
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}