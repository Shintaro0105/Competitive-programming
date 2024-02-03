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
    int h,w,n;cin>>h>>w>>n;
    vector g(h,(vector<char>(w,'.')));
    int now=0;
    int nx=0,ny=0;
    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    rep(i,n){
        if(g[nx][ny]=='.'){
            g[nx][ny]='#';
            now+=1;
            now%=4;
            nx+=h+dx[now];
            nx%=h;
            ny+=w+dy[now];
            ny%=w;
        }else{
            g[nx][ny]='.';
            now+=4-1;
            now%=4;
            nx+=h+dx[now];
            nx%=h;
            ny+=w+dy[now];
            ny%=w;
        }
    }
    rep(i,h){
        rep(j,w){
            cout<<g[i][j];
        }
        cout<<endl;
    }
    return 0;
}