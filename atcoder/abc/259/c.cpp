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
    bool flag=true;
    int lt=t.size(),ls=s.size();
    vector<pair<char,int>> ps,pt;
    ps.push_back(make_pair(s[0],1));
    pt.push_back(make_pair(t[0],1));
    rep(i,ls-1){
        auto& [a,b] = ps.back();
        if(a==s[i+1]){
            b++;
        }else{
            ps.push_back(make_pair(s[i+1],1));
        }
    }
    rep(i,lt-1){
        auto& [a,b] = pt.back();
        if(a==t[i+1]){
            b++;
        }else{
            pt.push_back(make_pair(t[i+1],1));
        }
    }
    if(pt.size()!=ps.size())flag=false;
    while(pt.size()){
        auto [a,b]=ps.back();
        auto [c,d]=pt.back();
        ps.pop_back();
        pt.pop_back();
        if(a==c){
            if(!((b==1&&d==1)||(b>=2&&d>=2&&d>=b)))flag=false;
        }else{flag=false;}
    }
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}