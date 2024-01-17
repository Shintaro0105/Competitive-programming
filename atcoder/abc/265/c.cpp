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
    char g[h][w];
    bool m[h][w];
    rep(i,h)rep(j,w)m[i][j]=false;
    rep(i,h)rep(j,w)cin>>g[i][j];
    queue<P> q;
    q.push(make_pair(0,0));
    while(q.size()){
        auto [i,j]=q.front();
        q.pop();
        if(m[i][j]){
            cout<<-1<<endl;
            return 0;
        }
        if(g[i][j]=='U'){
            if(i==0){
                cout<<i+1<<' '<<j+1<<endl;
                return 0;
            }
            q.push(make_pair(i-1,j));
        }else if(g[i][j]=='D'){
            if(i==h-1){
                cout<<i+1<<' '<<j+1<<endl;
                return 0;
            }
            q.push(make_pair(i+1,j));
        }else if(g[i][j]=='L'){
            if(j==0){
                cout<<i+1<<' '<<j+1<<endl;
                return 0;
            }
            q.push(make_pair(i,j-1));
        }else if(g[i][j]=='R'){
            if(j==w-1){
                cout<<i+1<<' '<<j+1<<endl;
                return 0;
            }
            q.push(make_pair(i,j+1));
        }
        m[i][j]=true;
    }
}