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
    int n;
    cin>>n;
    int a[n][n];
    rep(i,n){
        string s;
        cin>>s;
        rep(j,n){
            a[i][j]=s[j]-'0';
            //cout<<a[i][j];
        }
        //cout<<endl;
    }
    int dx[8]={-1,0,1,-1,1,-1,0,1},dy[8]={1,1,1,0,0,-1,-1,-1};
    ll ans=-1;
    rep(i,n)rep(j,n){
        rep(d,8){
            ll k=pow(10,n-1);
            ll sum=a[i][j]*k;
            int nx=i,ny=j;
            rep(l,n-1){
                if(nx==0&&dx[d]==-1){
                    nx=n-1;
                }else if(nx==n-1&&dx[d]==1){
                    nx=0;
                }else{
                    nx+=dx[d];
                }
                if(ny==0&&dy[d]==-1){
                    ny=n-1;
                }else if(ny==n-1&&dy[d]==1){
                    ny=0;
                }else{
                    ny+=dy[d];
                }
                k/=10;
                sum+=a[nx][ny]*k;
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}