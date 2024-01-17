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
    string s,t="oxxoxxoxxoxx";cin>>s;
    int l=s.size();
    vector<bool> b(3,true);
    rep(j,3){
        rep(i,l){
            if(t[j+i]!=s[i])b[j]=false;
        }
    }
    if(b[0]||b[1]||b[2]){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}