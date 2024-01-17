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
    vector<vector<char>> c(h,vector<char>(w));
    queue<P> q;
    rep(i,h){
        rep(j,w){
            cin>>c[i][j];
            if(0<i&&i<h-1&&0<j&&j<w-1&&c[i][j]=='#')q.push(make_pair(i,j));
        }
    }
    int dx[4]={1,1,-1,-1},dy[4]={1,-1,1,-1};
    vector<int> ans(min(h,w),0);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        bool b=true;
        rep(k,4){
            int ni=i+dx[k],nj=j+dy[k];
            if(c[ni][nj]!='#')b=false;
        }
        if(b){
            int cnt=0;
            int ni=i-1,nj=j-1;
            while(0<=ni&&0<=nj){
                if(c[ni][nj]=='#'){
                    cnt++;
                    ni--;nj--;
                }else break;
            }
            ans[cnt-1]++;
        }
    }
    rep(i,ans.size()-1){
        cout<<ans[i]<<' ';
    }
    cout<<ans[ans.size()-1]<<endl;;
    return 0;
}