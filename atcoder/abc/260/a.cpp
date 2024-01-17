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
    string s;cin>>s;
    sort(s.begin(),s.end());
    if(s[0]==s[1]&&s[1]==s[2]){
        cout<<-1<<endl;
    }else if(s[0]==s[1]&&s[1]!=s[2]){
        cout<<s[2]<<endl;
    }else if(s[0]!=s[1]&&s[1]==s[2]){
        cout<<s[0]<<endl;
    }else if(s[0]!=s[1]&&s[1]!=s[2]&&s[0]!=s[2]){
        cout<<s[0]<<endl;
    }
    return 0;
}