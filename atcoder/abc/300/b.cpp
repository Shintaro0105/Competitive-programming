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
    vector<vector<char>> a(h,vector<char>(w)),b(h,vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin>>a[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            cin>>b[i][j];
        }
    }
    bool f=false;
    rep(i,h){
        rep(j,w){
            vector<vector<char>> t(h,vector<char>(w));
            rep(r,h){
                rep(c,w){
                    if(r+i<h&&c+j<w){
                        t[r][c]=a[r+i][c+j];
                    }else if(r+i<h){
                        t[r][c]=a[r+i][c+j-w];
                    }else if(c+j<w){
                        t[r][c]=a[r+i-h][c+j];
                    }else{
                        t[r][c]=a[r+i-h][c+j-w];
                    }
                }
            }
            if(t==b)f=true;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}