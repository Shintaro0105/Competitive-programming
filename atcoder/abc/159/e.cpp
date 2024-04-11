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
    int h,w,k;cin>>h>>w>>k;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    vector sum(h,vector<int>(w+1,0));
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='1'){
                sum[i][j+1]=sum[i][j]+1;
            }else{
                sum[i][j+1]=sum[i][j];
            }
        }
    }
    int ans=inf;
    rep(i,1<<(h-1)){
        int cnt=0;
        rep(j,h-1){
            if(i>>j&1)cnt++;
        }
        vector<vector<int>> g(cnt+1);
        int now=0;
        rep(j,h-1){
            if(i>>j&1){
                g[now].push_back(j);
                now++;
            }else{
                g[now].push_back(j);
            }
        }
        bool flag=true;
        g[now].push_back(h-1);
        int last=0,cw=0;
        rep(j,w){
            vector<int> num(cnt+1,0);
            rep(l,cnt+1){
                for(int m:g[l]){
                    num[l]+=sum[m][j+1]-sum[m][last];
                }
                //cout<<num[l]<<' ';
            }
            //cout<<endl;
            rep(l,cnt+1){
                if(num[l]>k){
                    if(j==last)flag=false;
                    else if(j>last){
                        last=j;
                        j--;
                        cw++;
                    }
                }
            }
            if(!flag)break;
        }
        if(flag){
            if(last==w-1){
                vector<int> num(cnt+1,0);
                rep(l,cnt+1){
                    for(int m:g[l]){
                        num[l]+=sum[m][w]-sum[m][last];
                    }
                }
                bool f=true;
                rep(l,cnt+1){
                    if(num[l]>k)f=false;
                }
                if(f)ans=min(ans,cw+cnt);
            }else ans=min(ans,cw+cnt);
        }
    }
    cout<<ans<<endl;
    return 0;
}