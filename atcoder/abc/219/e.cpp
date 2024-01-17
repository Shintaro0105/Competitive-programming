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
const int di[]={-1,0,1,0};
const int dj[]={0,-1,0,1};
const int n=5,m=4;
int a[4][4];
int cnt[4][4];
bool used[n][n];
int si,sj;

int ans;
void dfs(int i,int j){
    used[i][j]=true;
    rep(v,4){
        int ni=i+di[v],nj=j+dj[v];
        if(ni<0||nj<0||ni>=n||nj>=n)continue;
        auto flip=[&]{
            if(ni==i){
                int l=min(j,nj);
                for(int mi=i;mi<m;mi++)cnt[mi][l]^=1;
            }
        };
        flip();
        if(used[ni][nj]){
            if(si==ni&&sj==nj){
                bool ok=true;
                rep(mi,m)rep(mj,m)if(a[mi][mj]&&!cnt[mi][mj])ok=false;
                if(ok)ans++;
            }
        }else{
            dfs(ni,nj);
        }
        flip();
    }
    used[i][j]=false;
}

int main(){
    rep(i,m)rep(j,m)cin>>a[i][j];
    rep(i,n)rep(j,n){
        si=i;sj=j;
        dfs(i,j);
        used[i][j]=true;
    }
    ans/=2;
    cout<<ans<<endl;
    return 0;
}