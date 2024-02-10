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
    int n;cin>>n;
    vector seen(n,vector<int>(n,-1));
    int dx[4]={1,0,-1,-0},dy[4]={0,1,0,-1};
    queue<P> p;
    p.push(make_pair(0,0));
    int i=1,c=0;
    while(!p.empty()){
        auto [x,y]=p.front();
        p.pop();
        seen[x][y]=i;
        i++;
        if(i==n*n){
            break;
        }
        int nx=x+dx[c%4],ny=y+dy[c%4];
        if(0<=nx&&nx<n&&0<=ny&&ny<n){
            if(seen[nx][ny]!=-1)c++;
        }else{
            c++;
        }
        nx=x+dx[c%4],ny=y+dy[c%4];
        p.push(make_pair(nx,ny));
    }
    rep(i,n){
        rep(j,n-1){
            if(i==n/2&&j==n/2){
                cout<<'T'<<' ';
            }else{
                cout<<seen[i][j]<<' ';
            }
        }
        cout<<seen[i][n-1]<<endl;
    }
    return 0;
}