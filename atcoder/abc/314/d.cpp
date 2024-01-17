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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    queue<pair<char,int>> p;
    int n;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    int now=0;
    rep(qi,q){
        int t,x;cin>>t>>x;
        x--;
        char c;cin>>c;
        if(t==1){
            p.push(make_pair(c,x));
        }else{
            now=t;
            while(!p.empty()){
                auto [i,j]=p.front();
                p.pop();
                s[j]=i;
            }
        }
    }
    if(now==2||now==3){
        if(now==2){
            rep(i,n){
                if('A'<=s[i]&&s[i]<='Z'){
                    s[i]='a'+s[i]-'A';
                }
            }
        }else{
            rep(i,n){
                if('a'<=s[i]&&s[i]<='z'){
                    s[i]='A'+s[i]-'a';
                }
            }
        }
    }
    while(!p.empty()){
        auto [i,j]=p.front();
        p.pop();
        s[j]=i;
    }
    cout<<s<<endl;
    return 0;
}