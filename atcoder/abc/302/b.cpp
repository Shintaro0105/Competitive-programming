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
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    string t="snuke";
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='s'){
                if(i<=h-5&&j<=w-5){
                    bool flag=true;
                    rep(k,5){
                        if(s[i+k][j+k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i+k+1<<' '<<j+k+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(i<=h-5&&j>=4){
                    bool flag=true;
                    rep(k,5){
                        if(s[i+k][j-k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i+k+1<<' '<<j-k+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(i>=4&&j<=w-5){
                    bool flag=true;
                    rep(k,5){
                        if(s[i-k][j+k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i-k+1<<' '<<j+k+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(i<=h-5){
                    bool flag=true;
                    rep(k,5){
                        if(s[i+k][j]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i+k+1<<' '<<j+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(j<=w-5){
                    bool flag=true;
                    rep(k,5){
                        if(s[i][j+k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i+1<<' '<<j+k+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(i>=4&&j>=4){
                    bool flag=true;
                    rep(k,5){
                        if(s[i-k][j-k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i-k+1<<' '<<j-k+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(i>=4){
                    bool flag=true;
                    rep(k,5){
                        if(s[i-k][j]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i-k+1<<' '<<j+1<<'\n';
                        }
                        return 0;
                    }
                }
                if(j>=4){
                    bool flag=true;
                    rep(k,5){
                        if(s[i][j-k]!=t[k])flag=false;
                    }
                    if(flag){
                        rep(k,5){
                            cout<<i+1<<' '<<j-k+1<<'\n';
                        }
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}