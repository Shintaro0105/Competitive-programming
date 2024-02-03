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
    string s;cin>>s;
    vector<string> t;
    string now="";
    rep(i,s.size()){
        if(s[i]=='.'){
            t.push_back(now);
            now="";
        }else{
            now+=s[i];
        }
    }
    t.push_back(now);
    cout<<t[t.size()-1]<<endl;
    return 0;
}