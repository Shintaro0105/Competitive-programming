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
    string s,t;
    cin>>s>>t;
    vector<string> ans;
    if(t.size()>s.size()){
        cout<<"UNRESTORABLE"<<endl;
        return 0;
    }
    rep(i,s.size()-t.size()+1){
        bool flag=true;
        rep(j,t.size()){
            if(s[i+j]!='?'&&s[i+j]!=t[j])flag=false;
        }
        if(flag){
            string u;
            rep(j,s.size()){
                if(i<=j&&j<i+t.size()){
                    u+=t[j-i];
                }else{
                    if(s[j]=='?'){
                        u+='a';
                    }else{
                        u+=s[j];
                    }
                }
            }
            ans.push_back(u);
        }
    }
    if(ans.size()==0){
        cout<<"UNRESTORABLE"<<endl;
    }else{
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
    return 0;
}