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
    string s;
    cin>>s;
    bool b=false,c=false,a=true;
    int l=s.size();
    rep(i,l){
        if('a'<=s[i]&&s[i]<='z')c=true;
        if('A'<=s[i]&&s[i]<='Z')b=true;
        rep(j,l){
            if(i!=j){
                if(s[j]==s[i])a=false;
            }
        }
    }
    if(a&&c&&b){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}