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
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    rep(i,10){
        rep(j,10){
            rep(k,10){
                vector<int> f(3,false);
                char a='0'+i,b='0'+j,c='0'+k;
                int l=0;
                while(l<n){
                    if(a==s[l]){
                        l++;
                        f[0]=true;
                        break;
                    }else{
                        l++;
                    }
                }
                while(l<n){
                    if(b==s[l]){
                        l++;
                        f[1]=true;
                        break;
                    }else{
                        l++;
                    }
                }
                while(l<n){
                    if(c==s[l]){
                        l++;
                        f[2]=true;
                        break;
                    }else{
                        l++;
                    }
                }
                bool flag=true;
                rep(i,3)if(!f[i])flag=false;
                if(flag)ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}