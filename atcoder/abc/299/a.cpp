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
    vector<int> l,t;
    rep(i,n){
        if(s[i]=='|')l.push_back(i);
        if(s[i]=='*')t.push_back(i);
    }
    if(l[0]<t[0]&&t[0]<l[1]){
        cout<<"in"<<endl;
    }else{
        cout<<"out"<<endl;
    }
    return 0;
}