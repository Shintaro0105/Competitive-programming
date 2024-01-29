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
    vector a(9,vector<int>(9));
    rep(i,9)rep(j,9){
        cin>>a[i][j];
        a[i][j]--;
    }
    bool ok=true;
    rep(i,9){
        vector<bool> f(9,false);
        rep(j,9){
            f[a[i][j]]=true;
        }
        bool flag=true;
        rep(j,9){
            if(!f[j])flag=false;
        }
        if(!flag)ok=false;
    }
    rep(j,9){
        vector<bool> f(9,false);
        rep(i,9){
            f[a[i][j]]=true;
        }
        bool flag=true;
        rep(i,9){
            if(!f[i])flag=false;
        }
        if(!flag)ok=false;
    }
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            vector<bool> f(9,false);
            rep(k,3){
                rep(l,3){
                    f[a[i+k][j+l]]=true;
                }
            }
            bool flag=true;
            rep(k,9){
                if(!f[k])flag=false;
            }
            if(!flag)ok=false;
        }
    }
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}