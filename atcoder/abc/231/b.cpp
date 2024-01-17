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
    vector<pair<int,string>> p;
    string s[n];
    rep(i,n){
        cin>>s[i];
    }
    rep(i,n){
        int cnt=0;
        string t=s[i];
        rep(j,n){
            if(t==s[j])cnt++;
        }
        bool flag=true;
        for(auto& [k,u]:p){
            if(u==t)flag=false;
        }
        if(flag)p.push_back({cnt,t});
    }
    sort(p.begin(),p.end());
    int l=p.size();
    cout<<p[l-1].second<<endl;
    return 0;
}