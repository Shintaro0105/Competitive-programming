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


int main(){
    string x;cin>>x;
    int n;cin>>n;
    string s[n];
    int m[26],l[26];
    rep(i,26){
        int t=x[i]-'a';
        m[t]=i;
        l[i]=t;
    }
    rep(i,n){
        cin>>s[i];
        rep(j,s[i].size()){
            int t=s[i][j]-'a';
            s[i][j]='a'+m[t];
        }
    }
    sort(s,s+n);
    rep(i,n){
        rep(j,s[i].size()){
            int t=s[i][j]-'a';
            s[i][j]='a'+l[t];
        }
        cout<<s[i]<<endl;
    }
    return 0;
}