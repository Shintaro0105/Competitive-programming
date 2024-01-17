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
    bool flag=false;
    rep(i,s.size()){
        if(i==0){
            if(s==t)flag=true;
        }else{
            string r;
            rep(j,s.size()){
                if(j==i){
                    r+=s[i-1];
                }else if(j==i-1){
                    r+=s[i];
                }else{
                    r+=s[j];
                }
            }
            if(t==r)flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}