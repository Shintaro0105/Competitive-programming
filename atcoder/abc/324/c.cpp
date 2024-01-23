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
    string t;cin>>t;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    int m=t.size();
    vector<int> ans;
    rep(i,n){
        bool flag=false;
        if(s[i].size()==m){
            int cnt=0;
            rep(j,m){
                if(s[i][j]!=t[j])cnt++;
            }
            if(cnt<=1)flag=true;
        }else if(s[i].size()==m+1){
            bool f1=true,f2=true;
            rep(j,m+1){
                if(f1){
                    if(s[i][j]!=t[j])f1=false;
                }else{
                    if(s[i][j]!=t[j-1])f2=false;
                }
            }
            if(f2)flag=true;
        }else if(s[i].size()==m-1){
            bool f1=true,f2=true;
            rep(j,m){
                if(f1){
                    if(s[i][j]!=t[j])f1=false;
                }else{
                    if(s[i][j-1]!=t[j])f2=false;
                }
            }
            if(f2)flag=true;
        }
        if(flag)ans.push_back(i+1);
    }
    cout<<ans.size()<<endl;
    if(ans.size()==0)cout<<endl;
    else{
        rep(i,ans.size()-1)cout<<ans[i]<<' ';
        cout<<ans[ans.size()-1]<<endl;
    }
    return 0;
}