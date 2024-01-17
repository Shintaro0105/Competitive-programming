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
    string s,t;cin>>s>>t;
    vector<int> cs(26,0),ct(26,0);
    int n=s.size(),ss=0,tt=0;
    rep(i,n){
        if('a'<=s[i]&&s[i]<='z')cs[(int)(s[i]-'a')]++;
        else ss++;
        if('a'<=t[i]&&t[i]<='z')ct[(int)(t[i]-'a')]++;
        else tt++;
    }
    string c="atcoder";
    bool flag=true;
    rep(i,26){
        if(cs[i]!=ct[i]){
            bool f=false;
            for(char a:c){
                if(i==(int)(a-'a'))f=true;
            }
            if(f){
                if(cs[i]>ct[i]){
                    tt-=cs[i]-ct[i];
                }else{
                    ss-=ct[i]-cs[i];
                }
            }else{
                flag=false;
            }
        }
    }
    if(tt!=ss||tt<0||ss<0)flag=false;
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}