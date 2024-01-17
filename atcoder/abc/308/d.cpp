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
    vector s(h,vector<char>(w));
    rep(i,h)rep(j,w)cin>>s[i][j];
    vector seen(h,vector<bool>(w,false));
    string c="snuke";
    queue<pair<P,int>> q;
    if(s[0][0]==c[0])q.push(make_pair(make_pair(0,0),0));
    bool flag=false;
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    while(!q.empty()){
        auto [a,b]=q.front();
        q.pop();
        if(a.first==h-1&&a.second==w-1){
            flag=true;
            break;
        }
        if(seen[a.first][a.second])continue;
        rep(i,4){
            int nx=a.first+dx[i],ny=a.second+dy[i];
            if(0<=nx&&nx<h&&0<=ny&&ny<w){
                if(s[nx][ny]==c[(b+1)%5])q.push(make_pair(make_pair(nx,ny),(b+1)%5));
            }
        }
        seen[a.first][a.second]=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}