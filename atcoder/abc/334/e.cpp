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
#include <atcoder/all>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using namespace atcoder;
using mint = modint998244353;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    dsu d(h*w+1);
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    int red=0;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'){
                rep(k,4){
                    int nx=i+dx[k],ny=j+dy[k];
                    if(0<=nx&&nx<h&&0<=ny&&ny<w){
                        if(s[nx][ny]=='#'){
                            d.merge(i*w+j,nx*w+ny);
                        }
                    }
                }
            }else{
                red++;
            }
        }
    }
    set<int> cnt;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='#'){
                cnt.insert(d.leader(i*w+j));
            }
        }
    }
    mint sum=0;
    mint inv=(mint)1/(mint)red;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='.'){
                set<int> st;
                rep(k,4){
                    int nx=i+dx[k],ny=j+dy[k];
                    if(0<=nx&&nx<h&&0<=ny&&ny<w){
                        if(s[nx][ny]=='#'){
                            st.insert(d.leader(nx*w+ny));
                        }
                    }
                }
                //cout<<i<<' '<<j<<' '<<cnt.size()-st.size()+1<<endl;
                sum+=(mint)(cnt.size()-st.size()+1)*inv;
            }
        }
    }
    cout<<sum.val()<<endl;
}